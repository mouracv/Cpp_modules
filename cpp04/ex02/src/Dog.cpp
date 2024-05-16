/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:58:46 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/16 16:31:13 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << GREEN << getType() << " constructor called!" << RESET << std::endl;
    _mind = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << YELLOW << getType() << " copy constructor called!" << RESET << std::endl;
    _mind = new Brain(*copy._mind);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << YELLOW << getType() << " operator called!" << RESET << std::endl;
    if (this != &other)
    {
        this->setType(other.getType());
        delete this->_mind;
        this->_mind = new Brain(*other._mind);   
    }
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << RED << getType() << " destructor called!" << RESET << std::endl;
    delete _mind;
}


//METHOD OVERWRITE
void Dog::makeSound(void) const{
    std::cout << MAGENTA << "Woof Woof!" << RESET << std::endl;
}

void Dog::setMind(std::string value){
    this->_mind->setIdeas(value);
}

void Dog::getMind(void) const{
    this->_mind->printIdeas();
    std::cout << BLUE << _type << ": Brain memory= " << (_mind) << std::endl;
}