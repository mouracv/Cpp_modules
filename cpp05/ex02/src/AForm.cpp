/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:41:11 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/27 17:13:56 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

//constructors
AForm::AForm(const std::string str, int value, int rgrade) 
:  _requiredGrade(rgrade), _name(str), _signed(0), _grade(value)
{
    std::cout << GREEN << "AForm " << this->getName() << " constructor called!" << RESET << std::endl;
    if (value < 1)
        throw(AForm::GradeTooHighException());
    else if (rgrade < 1)
        throw(AForm::GradeTooHighException("Grade to sign is too high!"));
    else if (value > 150)
        throw(AForm::GradeTooLowException());
    else if (rgrade > 150)
        throw(AForm::GradeTooHighException("Grade to sign is too low!"));
}

AForm::AForm(const AForm& copy) 
: _requiredGrade(copy._requiredGrade), _name(copy._name), _signed(copy._signed), _grade(copy._grade)
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
    std::cout << RED << "Form " << this->getName() << " destructor called!" << RESET << std::endl;
}

//Methods
int AForm::getRequiredGrade() const{
    return(this->_requiredGrade);
}

const std::string& AForm::getName(void) const{
    return(this->_name);
}

int AForm::getGrade(void) const{
    return(this->_grade);
}

bool AForm::getSigned(void) const{
    return(this->_signed);
}

void AForm::incrementGrade(void)
{
    if ((_grade - 1) < 1)
        throw(AForm::GradeTooHighException("Max garde can not be incremented!"));
    _grade--;
}

void AForm::decrementGrade(void)
{
    if ((_grade + 1) > 150)
        throw(AForm::GradeTooLowException("Lowest grade can not be decremented"));
    _grade++;
}

void AForm::beSigned(Bureaucrat& info_b)
{
    if (info_b.getGrade() > this->_grade)
        throw(AForm::GradeTooLowException("Grade is too low to sign the form!"));
    this->_signed = 1;
}

std::ostream& operator<<(std::ostream& out, const AForm& input)
{
    out << input.getName() << " has the grade " << input.getGrade();
    out << " and the form is " << input.getSigned() << ". The minimum grade to sign is ";
    out << input.getRequiredGrade() << "." << std::endl;
    return(out);
}

