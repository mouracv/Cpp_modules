/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:38:22 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/12 15:20:53 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cerrno>
#include <iomanip>
#include <cmath>
#include <limits>
#include <sstream>
#include <climits>

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"

enum LiteralType
{
    CHAR = 1,
    INT,
    FLOAT,
    DOUBLE,
    SPECIAL,
    INF,
    INVALID      
};

class ScalarConverter 
{
    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter(void);
        
    public:
        static void convert(std::string input);
};



#endif