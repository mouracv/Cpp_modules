/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:52:16 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/14 16:33:58 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << GREEN << getType() << " constructor called!" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    std::cout << YELLOW << getType() << " copy constructor called!" << RESET << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << YELLOW << getType() << " operator called!" << RESET << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << RED << getType() << " destructor called!" << RESET << std::endl;
}

void WrongCat::makeSound(void) const{
    std::cout << MAGENTA << "Meow Meow!" << RESET << std::endl;
}
