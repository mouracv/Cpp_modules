/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:12:50 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/04 17:24:50 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
    
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
    (void)copy;
    
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return(*this);
}

ScalarConverter::~ScalarConverter(void)
{
    
}


void ScalarConverter::convert(std::string input)
{
    std::cout << input << input.length(); 
}