/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:54:36 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/29 17:10:45 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    // power = new char[11 +1];
    // power[11] = 0;
    // memset(power, 'A', 11);
}
Fixed::Fixed(std::string name)
{
    power = new char[11 +1];
    power[11] = 0;
    memset(power, name[0], 11);
}

Fixed::~Fixed(void)
{
    delete [] power;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "COPY CONTUCTOR CALLED" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "OPEREATOR COPY CONTUCTOR CALLED" << std::endl;
    if (this != &other)
    {
        this->power = other.power;
    }
    return (*this);
}


// int Fixed::getRawBits(void) const
// {
    
// }

// void Fixed::setRawBits(int const raw)
// {
    
// }






