/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:25:17 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/14 16:00:42 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Alien")
{
    std::cout << GREEN << "Animal " << _type << " constructor called!" << RESET << std::endl;
}

Animal::Animal(std::string  name) : _type(name)
{
    std::cout << GREEN << "Animal " << _type << " constructor called!" << RESET << std::endl;
}

Animal::~Animal(void){
    std::cout << RED << "Animal " << _type << " destructor called!" << RESET << std::endl; 
}

void Animal::makeSound(void) const {
    std::cout << MAGENTA << "WHAT AM I?" << RESET << std::endl; 
}

std::string Animal::getType(void) const {
    return (this->_type);
}

void Animal::setType(std::string name){
    this->_type = name;
}

Animal::Animal(const Animal& copy)
{
    std::cout << YELLOW << "Animal " << _type << " copy constructor called!" << RESET << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << YELLOW << "Animal " << _type << " operator called!" << RESET << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return (*this);
}
