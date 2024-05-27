/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:41:11 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/27 14:58:46 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

//constructors
Form::Form(const std::string str, int value, int rgrade) 
:  _requiredGrade(rgrade), _name(str), _signed(0), _grade(value)
{
    std::cout << GREEN << "Form " << this->getName() << " constructor called!" << RESET << std::endl;
    if (value < 1)
        throw(Form::GradeTooHighException());
    else if (rgrade < 1)
        throw(Form::GradeTooHighException("Grade to sign is too high!"));
    else if (value > 150)
        throw(Form::GradeTooLowException());
    else if (rgrade > 150)
        throw(Form::GradeTooHighException("Grade to sign is too low!"));
}

Form::Form(const Form& copy) 
: _requiredGrade(copy._requiredGrade), _name(copy._name), _signed(copy._signed), _grade(copy._grade)
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
int Form::getRequiredGrade() const{
    return(this->_requiredGrade);
}

const std::string& Form::getName(void) const{
    return(this->_name);
}

int Form::getGrade(void) const{
    return(this->_grade);
}

bool Form::getSigned(void) const{
    return(this->_signed);
}

void Form::incrementGrade(void)
{
    if ((_grade - 1) < 1)
        throw(Form::GradeTooHighException("Max garde can not be incremented!"));
    _grade--;
}

void Form::decrementGrade(void)
{
    if ((_grade + 1) > 150)
        throw(Form::GradeTooLowException("Lowest grade can not be decremented"));
    _grade++;
}

void Form::beSigned(Bureaucrat& info_b)
{
    if (info_b.getGrade() > this->_grade)
        throw(Form::GradeTooLowException("Grade is too low to sign the form!"));
    this->_signed = 1;
}

std::ostream& operator<<(std::ostream& out, const Form& input)
{
    out << input.getName() << " has the grade " << input.getGrade();
    out << " and the form is " << input.getSigned() << ". The minimum grade to sign is ";
    out << input.getRequiredGrade() << "." << std::endl;
    return(out);
}

