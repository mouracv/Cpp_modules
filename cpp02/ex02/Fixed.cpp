/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:54:36 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/07 18:06:36 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//CONTRUCTOR AND DESTRUCTOR
Fixed::Fixed(void) : _fixed_point_number(0)
{
    std::cout << GREEN << "Default constructer called" << RESET << std::endl;
}

Fixed::Fixed(const int raw)
{
    std::cout << GREEN << "Int constructer called" << RESET << std::endl;
    _fixed_point_number = (raw << _store_point_bits);
}

Fixed::Fixed(const float raw)
{
    std::cout << GREEN << "Float constructer called" << RESET << std::endl;
    _fixed_point_number = roundf(raw * (1 << _store_point_bits));
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

//METHODS
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
    return((float)_fixed_point_number / (1 << _store_point_bits));
}

int     Fixed::toInt(void) const
{
    return(roundf(_fixed_point_number >> _store_point_bits));
}


//OPERATORS
std::ostream &operator<<(std::ostream& out, const Fixed& other)
{
    out << other.toFloat();
    return(out);
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
    if (this != &other)
        this->_fixed_point_number = other.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed& other){
    return(this->_fixed_point_number > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other){
    return(this->_fixed_point_number < other.getRawBits());
}

bool Fixed::operator==(const Fixed& other){
    return((this->_fixed_point_number == other.getRawBits()) ? 0 : 1);
}

bool Fixed::operator!=(const Fixed& other){
    return((this->_fixed_point_number != other.getRawBits()) ? 0 : 1);
}

bool Fixed::operator>=(const Fixed& other){
    return((this->_fixed_point_number >= other.getRawBits()) ? 0 : 1);
}

bool Fixed::operator<=(const Fixed& other){
    return((this->_fixed_point_number <= other.getRawBits()) ? 0 : 1);
}


Fixed& operator+(const Fixed& other){};
Fixed& operator-(const Fixed& other){};
Fixed& operator*(const Fixed& other){};

// Fixed& operator/(const Fixed& other){};

