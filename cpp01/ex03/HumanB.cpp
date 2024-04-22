/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:52:02 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/22 11:59:09 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//CONSTRUCTOR AND  DESTRUCTOR
HumanB::HumanB(std::string name) 
: _name(name), _knife(NULL)
{
     std::cout << GREEN << _name << ": contructor called!" << RESET << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << RED << _name << ": destructor called!" << RESET << std::endl;
}


//METHODS
void HumanB::attack(void)
{
    std::cout << YELLOW << _name << " attacks with their " << _knife->getType(); 
    std::cout << RESET << std::endl;
}

void HumanB::setWeapon(Weapon& obj)
{
    _knife = &obj;
}




