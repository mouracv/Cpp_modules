/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:56:21 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/19 18:17:40 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string input) : _type(input) {}

Weapon::~Weapon(void)
{
    std::cout << RED << "Default destructor called" << RESET << std::endl;
}

void Weapon::setType(std::string new_type)
{
    _type = new_type;
    return ;
}

const std::string& Weapon::getType(void) const{
    return (_type);
}