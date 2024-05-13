/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:58:46 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/13 17:10:04 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string name) : Animal(name)
{
    std::cout << GREEN << "Dog " << getType() << " constructor called!" << RESET << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << YELLOW << "Dog " << getType() << " copy constructor called!" << RESET << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << YELLOW << "Dog " << getType() << " operator called!" << RESET << std::endl;
    if (this != &other)
        this->setType(other.getType());
}
