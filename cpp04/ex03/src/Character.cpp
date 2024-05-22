/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:26:10 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/22 14:49:19 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Character.hpp"

Character::Character() : _name("unknown")
{
    std::cout << GREEN << "Character " << _name << " : constructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++){
        _inventory[i] = NULL;
    }
}

Character::Character(std::string name) : _name(name)
{
    std::cout << GREEN << "Character " << _name << " : constructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++){
        _inventory[i] = NULL;
    }
}

Character::Character(const Character& copy) : _name(copy.getName())
{
    std::cout << GREEN << "Character " << _name << " : copy constructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if (copy._inventory[i])
            this->_inventory[i] = copy._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        std::cout << YELLOW << "Character " << _name << " : copy operator called!" << std::endl;
        this->_name = other.getName();
        for (size_t i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
            {                
                delete this->_inventory[i];
                this->_inventory[i] = NULL;
            }
            if (other._inventory[i])
                this->_inventory[i] = other._inventory[i]->clone();   
        }
    }
    return (*this);
}

Character::~Character(void)
{
    std::cout << RED << "Character " << _name << " : destructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}


/*-----------------------------------Overwrite functions---------------------------------*/

std::string const& Character::getName() const{
    return(this->_name);
}

void Character::equip(AMateria* m)
{
    for (size_t i = 0; i < 4; i++)
    {
        if(!_inventory[i])
        {
            _inventory[i] = m;
            return;
        }
    }
    std::cout << RED << this->getName() << " inventory is full !!" << RESET << std::endl;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        _inventory[idx] = NULL;
        return;
    }
    std::cout << RED << this->getName() << " inventory only have 4 slots" << RESET << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 ||  !_inventory[idx])
    {
        std::cout << RED << this->getName() << " invalid index" << RESET << std::endl;
        return;
    }
    this->_inventory[idx]->use(target);
}
