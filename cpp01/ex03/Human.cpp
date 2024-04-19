/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:38:28 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/19 18:48:09 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon& knife)
 : _name(new_name), _obj(knife)
{
    std::cout << GREEN << _name << ": contructor called!" << RESET << std::endl;    
}

HumanA::~HumanA(void)
{
    std::cout << RED << _name << ": destructor called!" << RESET << std::endl;
}

void HumanA::attack(void)
{
    std::cout << YELLOW << _name << " attacks with their " << _obj.getType(); 
    std::cout << RESET << std::endl;
}