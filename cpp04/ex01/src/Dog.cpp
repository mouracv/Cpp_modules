/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:58:46 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/14 16:33:25 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << GREEN << getType() << " constructor called!" << RESET << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << YELLOW << getType() << " copy constructor called!" << RESET << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << YELLOW << getType() << " operator called!" << RESET << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << RED << getType() << " destructor called!" << RESET << std::endl;
}


//METHOD OVERWRITE
void Dog::makeSound(void) const{
    std::cout << MAGENTA << "Woof Woof!" << RESET << std::endl;
}
