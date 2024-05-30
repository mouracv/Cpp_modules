/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:25:25 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/30 15:59:05 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

//CONSTRUCTORS
RobotomyRequestForm::RobotomyRequestForm(const std::string name) : AForm(name, 72, 45)
{
    std::cout << GREEN << "RobotomyRequestForm " << this->getName() << " constructor called!" << RESET << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy)
{
    std::cout << GREEN << "RobotomyRequestForm " << this->getName() << " copy constructor called!" << RESET << std::endl;
}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        std::cout << YELLOW << "RobotomyRequestForm " << this->getName() << " operator called!" << RESET << std::endl;
        AForm::operator=(other);
    }
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << RED << "RobotomyRequestForm " << this->getName() << " operator called!" << RESET << std::endl;
}


//Overwriten function

void RobotomyRequestForm::beExecute() const
{
    std::cout << MAGENTA << "STUSTUSTUSTUTUTUT" << std::endl;
    srand(time(NULL));
    if (rand() % 2)
        std::cout << this->getName() << " has been robotomized successfully!" << std::endl;
    else
        std::cout << this->getName() << " robotomized failed!" << std::endl;
    std::cout << RESET;
}







