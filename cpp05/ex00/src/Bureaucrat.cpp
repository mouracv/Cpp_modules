/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:07:23 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/27 11:47:48 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string str, int value) : _name(str)
{
    std::cout << GREEN << this->getName() << " constructor called!" << RESET << std::endl;
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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& info)
{
    out << info.getName() << ", bureaucrat grade " << info.getGrade() << std::endl;
    return(out);    
}

