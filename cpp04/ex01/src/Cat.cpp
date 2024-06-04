/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:48:44 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/04 14:10:57 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << GREEN << getType() << " constructor called!" << RESET << std::endl;
    _mind = new Brain();
    this->_type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << YELLOW << getType() << " copy constructor called!" << RESET << std::endl;
    _mind = new Brain(*copy._mind);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << YELLOW << getType() << " operator called!" << RESET << std::endl;
    if (this != &other)
    {
        this->setType(other.getType());
        *this->_mind = *other._mind;
    }
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << RED << getType() << " destructor called!" << RESET << std::endl;
    delete _mind;
}

//METHOD OVERWRITE
void Cat::makeSound(void) const{
    std::cout << MAGENTA << "Meow Meow!" << RESET << std::endl;
}

void  Cat::setMind(std::string value){
    this->_mind->setIdeas(value);
}

void Cat::getMind(void) const{
    this->_mind->printIdeas();
    std::cout << BLUE << _type << ": Brain memory= " << (_mind) << std::endl;
}