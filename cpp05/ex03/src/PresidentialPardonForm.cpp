/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:27:18 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/30 15:58:19 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

//CONSTRUCTORS

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : AForm(name, 25, 5)
{
    std::cout << GREEN << "PresidentialPardonForm " << this->getName() << " constructor called!" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy)
{
    std::cout << GREEN << "PresidentialPardonForm " << this->getName() << " copy constructor called!" << RESET << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        std::cout << YELLOW << "PresidentialPardonForm " << this->getName() << " operator called!" << RESET << std::endl;
        AForm::operator=(other);
    }
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << RED << "PresidentialPardonForm " << this->getName() << " operator called!" << RESET << std::endl;
    
}

//Overwriten function

void PresidentialPardonForm::beExecute() const
{
    std::cout << MAGENTA << this->getName() << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
}

