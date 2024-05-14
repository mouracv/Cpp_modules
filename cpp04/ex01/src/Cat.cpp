/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:48:44 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/14 16:33:11 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << GREEN << getType() << " constructor called!" << RESET << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << YELLOW << getType() << " copy constructor called!" << RESET << std::endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << YELLOW << getType() << " operator called!" << RESET << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << RED << getType() << " destructor called!" << RESET << std::endl;
}

//METHOD OVERWRITE
void Cat::makeSound(void) const{
    std::cout << MAGENTA << "Meow Meow!" << RESET << std::endl;
}
