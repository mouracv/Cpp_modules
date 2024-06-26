/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:55:58 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/19 16:08:00 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor
Zombie::Zombie(std::string name) : _name(name)
{
    
}

Zombie::~Zombie()
{
       std::cout << RED << _name << ": destructor called!!" << RESET << std::endl;
}

//Methods
void Zombie::announce(void)
{
    std::cout << YELLOW << _name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}



