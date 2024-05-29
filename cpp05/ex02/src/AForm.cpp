/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:41:11 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/29 16:48:37 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

//constructors
AForm::AForm(const std::string str, int signgrade, int execgrade) 
: _name(str), _signed(0), _signGrade(signgrade), _executeGrade(execgrade)
{
    std::cout << GREEN << "AForm " << this->getName() << " constructor called!" << RESET << std::endl;
    if (signgrade < 1)
        throw(AForm::GradeTooHighException());
    else if (execgrade < 1)
        throw(AForm::GradeTooHighException("Grade to sign is too high!"));
    else if (signgrade > 150)
        throw(AForm::GradeTooLowException());
    else if (execgrade > 150)
        throw(AForm::GradeTooHighException("Grade to sign is too low!"));
}

AForm::AForm(const AForm& copy) 
: _name(copy._name), _signed(copy._signed), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
    std::cout << GREEN << "AForm " << this->getName() << " constructor called!" << RESET << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
        this->_signed = other._signed;
    }
    return(*this);
}

AForm::~AForm(void)
{
    std::cout << RED << "AForm " << this->getName() << " destructor called!" << RESET << std::endl;
}

//Methods
int AForm::getExecuteGrade() const{
    return(this->_executeGrade);
}

const std::string& AForm::getName(void) const{
    return(this->_name);
}

int AForm::getSignGrade(void) const{
    return(this->_signGrade);
}

bool AForm::getSigned(void) const{
    return(this->_signed);
}

void AForm::beSigned(Bureaucrat& info_b)
{
    if (info_b.getGrade() > this->_signGrade)
        throw(AForm::GradeTooLowException("Grade is too low to sign the form!"));
    this->_signed = 1;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigned())
        throw(AForm::GradeTooLowException("Form is not sign!"));
    else if (executor.getGrade() <= this->_executeGrade)
        this->beExecute();
    else
        throw(AForm::GradeTooLowException("Grade is too low to execute!"));
}

std::ostream& operator<<(std::ostream& out, const AForm& input)
{
    out << input.getName() << ", is " << input.getSigned();
    out << " signed, SignGrade " << input.getSignGrade() << ", ExecGrade ";
    out << input.getExecuteGrade() << "." << std::endl;
    return(out);
}

