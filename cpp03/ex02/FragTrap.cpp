/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:26:37 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/10 16:45:05 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << GREEN << "ScavTrap " << _name << " constructor called!" << RESET << std::endl;
}
FragTrap::FragTrap(std::string nick) : ClapTrap(nick)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << GREEN << "ScavTrap " << _name << " constructor called!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << YELLOW << "ScavTrap " << _name << " copy constructor called!" << RESET << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << YELLOW << "ScavTrap " << _name << " copy operator called!" << RESET << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap(void){
    std::cout << RED << "FragTrap " << _name << " desctructor called!" << RESET << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << BLUE << "FragTrap " << _name << " High Five Time!!!" << RESET << std::endl;
}



