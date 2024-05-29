/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:41:11 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/29 13:05:06 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

//constructors
Form::Form(const std::string str, int signgrade, int execgrade) 
: _name(str), _signed(0), _signGrade(signgrade), _executeGrade(execgrade)
{
    std::cout << GREEN << "Form " << this->getName() << " constructor called!" << RESET << std::endl;
    if (signgrade < 1)
        throw(Form::GradeTooHighException());
    else if (execgrade < 1)
        throw(Form::GradeTooHighException("Grade to sign is too high!"));
    else if (signgrade > 150)
        throw(Form::GradeTooLowException());
    else if (execgrade > 150)
        throw(Form::GradeTooHighException("Grade to sign is too low!"));
}

Form::Form(const Form& copy) 
: _name(copy._name), _signed(copy._signed), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
    std::cout << GREEN << "Form " << this->getName() << " constructor called!" << RESET << std::endl;
}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
        this->_signed = other._signed;
    }
    return(*this);
}

Form::~Form(void)
{
    std::cout << RED << "Form " << this->getName() << " destructor called!" << RESET << std::endl;
}

//Methods
int Form::getExecuteGrade() const{
    return(this->_executeGrade);
}

const std::string& Form::getName(void) const{
    return(this->_name);
}

int Form::getSignGrade(void) const{
    return(this->_signGrade);
}

bool Form::getSigned(void) const{
    return(this->_signed);
}

void Form::beSigned(Bureaucrat& info_b)
{
    if (info_b.getGrade() > this->_signGrade)
        throw(Form::GradeTooLowException("Grade is too low to sign the form!"));
    this->_signed = 1;
}

std::ostream& operator<<(std::ostream& out, const Form& input)
{
    out << input.getName() << ", is " << input.getSigned();
    out << " signed, SignGrade " << input.getSignGrade() << ", ExecGrade ";
    out << input.getExecuteGrade() << "." << std::endl;
    return(out);
}

