/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:36:06 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/10 14:16:14 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void) : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << GREEN << "ScavTrap " << _name << " constructor called!" << RESET << std::endl;
}


ScavTrap::ScavTrap(std::string nick) : ClapTrap(nick)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << GREEN << "ScavTrap " << _name << " constructor called!" << RESET << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << CYAN << "ScavTrap copy contructor called";
    std::cout << RESET << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << CYAN << "ScavTrap copy operator called";
    std::cout << RESET << std::endl;
    if(this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}


ScavTrap::~ScavTrap(void){
    std::cout << RED << "ScavTrap " << _name << " desctructor called!" << RESET << std::endl;
}



void ScavTrap::guardGate(){
    std::cout << BLUE << "ScavTrap " << _name << " is now in guardGate mode! " << RESET << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0)
    {
        std::cout << BLUE << "ScavTrap " << _name << " is alredy dead!" << RESET << std::endl;
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout << BLUE <<  "ScavTrap " << _name << " is out of energy!" << RESET << std::endl;
        return ;
    }
    std::cout << YELLOW << "ScavTrap " << _name << " attacks " << target;
    std::cout << ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;
    _energyPoints--;
}

