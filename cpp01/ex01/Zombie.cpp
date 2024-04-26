/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:55:58 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/26 10:28:35 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor and Destructor
Zombie::Zombie(void) : _name("zombies")
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

void Zombie::setname(std::string str)
{
    _name = str;
    return ;
}


