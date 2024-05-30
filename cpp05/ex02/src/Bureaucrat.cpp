/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:30:40 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/30 16:01:55 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string str, int value) : _name(str)
{
    std::cout << GREEN << "Bureaucrat " << this->getName() << " constructor called!" << RESET << std::endl;
    if (value < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (value > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = value;

}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade)
{  
    std::cout << GREEN << this->getName() << " copy constructor called!" << RESET << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
    {
        std::cout << YELLOW << this->getName() << " copy operator called" << RESET << std::endl;
        this->_grade = other._grade;
    }
    return(*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << RED << this->getName() << " destructor called!" << RESET << std::endl;
}



//Methods
void Bureaucrat::incrementGrade(void)
{
    if ((_grade - 1) < 1)
        throw(Bureaucrat::GradeTooHighException("Max grade can not be incremented"));
    _grade--;
}
void Bureaucrat::decrementGrade(void)
{
    if ((_grade + 1) > 150)
        throw(Bureaucrat::GradeTooLowException("Lowest grade can not be decremented"));
    _grade++;
}

int Bureaucrat::getGrade(void) const{
    return(_grade);
}

const std::string& Bureaucrat::getName(void) const{
    return(_name);
}

void Bureaucrat::signForm(AForm& info_f)
{
    try
    {
        info_f.beSigned(*this);
        std::cout << MAGENTA << this->_name << " signed " << info_f.getName() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << MAGENTA << this->_name << " couldn't sign " << info_f.getName() ;
        std::cout << " because grade is low then required grade to sign!" << RESET << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << MAGENTA << this->_name << " executed  " << form.getName() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << MAGENTA << this->_name << " could not execute " << form.getName() << " because: ";
        std::cout << e.what() << RESET << std::endl;
    }
}


std::ostream& operator<<(std::ostream& out, const Bureaucrat& info)
{
    out << info.getName() << ", bureaucrat grade " << info.getGrade() << std::endl;
    return(out);    
}

