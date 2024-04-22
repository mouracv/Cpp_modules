/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:38:28 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/22 11:49:35 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon& knife)
 : _name(new_name), _knife(knife)
{
    std::cout << GREEN << _name << ": contructor called!" << RESET << std::endl;    
}

HumanA::~HumanA(void)
{
    std::cout << RED << _name << ": destructor called!" << RESET << std::endl;
}

void HumanA::attack(void)
{
    std::cout << YELLOW << _name << " attacks with their " << _knife.getType(); 
    std::cout << RESET << std::endl;
}