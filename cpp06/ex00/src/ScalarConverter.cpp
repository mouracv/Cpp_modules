/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:12:50 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/07 11:57:56 by aleperei         ###   ########.fr       */
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
    
    errno = 0;
    double numd = std::strtod(input.c_str(), &end);
    if (*end == '\0' && errno != ERANGE)
    {
        return(DOUBLE);
    }
    (void) numd;
    
    return(INVALID);
}


static int checkSpecialLiterals(int& opc, std::string input)
{
    int special = 0;
    if (opc != 7)
        return(special);
    else
    {
        if (!input.compare("nan"))
            special = NAN;
        if (!input.compare("+inf")  || !input.compare("+inff"))
            special = INFINITE;
        if (!input.compare("-inf")  || !input.compare("-inff"))
            special = INFINITE;
    }
    return(special);
}

static void printChar(char c)
{
    std::cout << "Char: " << c << std::endl;
    int i = static_cast<int>(c);
    std::cout << "Int: " << i << std::endl;
    float j = static_cast<float>(c);
    if (std::floor(j) == j)
        std::cout << std::fixed << std::setprecision(1);
    std::cout << "Float: " << j <<  'f' << std::endl;
    double k = static_cast<double>(c);
    if (std::floor(k) == k)
        std::cout << std::fixed << std::setprecision(1);
    std::cout << "Double: " << k << std::endl;

}

void ScalarConverter::convert(std::string input)
{
    if (input.empty())
    {
        std::cout << RED << "Invalid input!" << RESET << std::endl;
        return;
    }

    int opc = checkLiteralType(input);
    // o str tol ja da handle no nan e no inf ou seja so preciso ver depois se ta td bem
    int special = checkSpecialLiterals(opc, input);
    std::cout << opc << " | "<< special <<std::endl;

    switch(opc)
    {
        case CHAR:
            printChar(input[0]);
            break;
        
        case INT:
            break;
        
        case FLOAT:
            break;
        
        case DOUBLE:
            break;
        
        default:
            std::cout << RED << "Invalid type!" << RESET << std::endl;
            break;
    }
}
