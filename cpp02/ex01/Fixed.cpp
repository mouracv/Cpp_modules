/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:54:36 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/06 16:29:41 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void) : _fixed_point_number(0)
{
    std::cout << GREEN << "Default constructer called" << RESET << std::endl;
}

Fixed::Fixed(const int raw)
{
    
}

Fixed::Fixed(const float raw)
{
    
}

Fixed::~Fixed(void)
{
    std::cout << RED << "Default destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << BLUE << "Copy assignment operator called" << RESET << std::endl;
    if (this != &other)
        this->_fixed_point_number = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << CYAN << "getRawBits member function called" << RESET << std::endl;
    return (_fixed_point_number);
}

void Fixed::setRawBits(int const raw){
    _fixed_point_number = raw;
}


float   Fixed::toFloat(void) const
{
    
}

int     Fixed::toInt(void) const
{
    
}

