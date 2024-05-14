/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:25:17 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/14 16:00:33 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Alien")
{
    std::cout << GREEN << "WrongAnimal " << _type << " constructor called!" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string  name) : _type(name)
{
    std::cout << GREEN << "WrongAnimal " << _type << " constructor called!" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << RED << "WrongAnimal " << _type << " destructor called!" << RESET << std::endl; 
}

void WrongAnimal::makeSound(void) const {
    std::cout << MAGENTA << "WHAT AM I?" << RESET << std::endl; 
}

std::string WrongAnimal::getType(void) const {
    return (this->_type);
}

void WrongAnimal::setType(std::string name){
    this->_type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << YELLOW << "WrongAnimal " << _type << " copy constructor called!" << RESET << std::endl;
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << YELLOW << "WrongAnimal " << _type << " operator called!" << RESET << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return (*this);
}
