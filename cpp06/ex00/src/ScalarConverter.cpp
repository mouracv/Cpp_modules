/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:12:50 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/05 17:19:50 by aleperei         ###   ########.fr       */
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


static int checkInt(std::string& input)
{
    char *end;
    long num;
    
    if (input.length() > 12)
        return(1);
    
    errno = 0;
    num = std::strtol(input.c_str(), &end, 10);
    if (*end != '\0' || errno == ERANGE)
        return(1);
    else if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min() )
        return(1);
    else
        return(0);
}

static int checkLiteralType(std::string input)
{
    char *end;
    
    if(input.size() == 1 && isprint(input[0]) && !isdigit(input[0]))
        return(CHAR);
    else if (!checkInt(input))
        return(INT);
    
    errno = 0;
    float numf = std::strtof(input.c_str(), &end);
    if (*end == 'f' && *(end + 1) == '\0' && (errno != ERANGE))
    {
        return(FLOAT);
    }
    (void) numf;
    
    // errno = 0;
    // double numd = std::strtod(input.c_str(), &end);
    // if (*end == '\0' && errno != ERANGE)
    // {
    //     std::cout << numd << " " << std::numeric_limits<double>::min() << "   " << std::numeric_limits<double>::max() << std::endl;
    //     if (numd > std::numeric_limits<double>::min() && numd < std::numeric_limits<double>::max())
    //         return(DOUBLE);
    // }
    
    return(INVALID);
}


void ScalarConverter::convert(std::string input)
{
    int opc = checkLiteralType(input);
    std::cout << opc << std::endl;
}