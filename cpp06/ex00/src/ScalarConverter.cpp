/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:12:50 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/11 16:52:53 by aleperei         ###   ########.fr       */
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


static bool checkInt(std::string& input)
{
    long int num;
    char *end;
    
    num = std::strtol(input.c_str(), &end, 10);
    if ((*end != '\0'))
        return(1);
    else
        return(0);
}

static void checkSpecialType(int& opc, std::string& input)
{
    if (opc == 3)
    {
        float j = std::strtof(input.c_str(), NULL);
        if (std::isnan(j))
            opc = SPECIAL;
        else
            opc = INF;
    }
    else if (opc == 4)
    {
        double k = std::strtod(input.c_str(), NULL);
        if (std::isnan(k))
            opc = SPECIAL;
        else
            opc = INF;
    }
}

static int checkLiteralType(std::string input)
{
    char *end;
    
    if(input.size() == 1 && isprint(input[0]) && !isdigit(input[0]))
        return(CHAR);
    else if (input.find_first_of(".fn") == std::string::npos)
    {
        long int val = std::strtol(input.c_str(), &end, 10);
        if (*end == '\0')
            return(INT);
        (void) val;
    }
    
    errno = 0;
    float numf = std::strtof(input.c_str(), &end);
    if (*end == 'f' && *(end + 1) == '\0' && *(end - 1) != '.' && (errno != ERANGE))
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


static void printChar(char c)
{
    std::cout << "Char: " << "'" << c << "'" << std::endl;
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

static void printInt(std::string input)
{
    long int val;
    std::istringstream box(input);
    
    box >> val;
    //Char
    if (!box.fail() && (val > 0 && val < 127))
    {
        if (std::isprint(val))   
            std::cout << "Char: " << "'" << static_cast<char>(val) << "'" << std::endl;
        else
            std::cout << "Char: non displayable" << std::endl;       
    }
    else
        std::cout << "Char: impossible" << std::endl;
    
    //Int
    if (val >= std::numeric_limits<int>::min() && val <= std::numeric_limits<int>::max())
        std::cout << "int: " << val << std::endl;
    else
        std::cout << "int: Impossible" << std::endl;
    
    //Float
    float j = static_cast<float>(val);
    if (std::floor(j) == j)
        std::cout << std::fixed << std::setprecision(1);
    std::cout << "Float: " << j <<  'f' << std::endl;
    
    //Double
    double k = static_cast<double>(val);
    if (std::floor(k) == k)
        std::cout << std::fixed << std::setprecision(1);
    std::cout << "Double: " << k << std::endl;
    box.clear();
}



/*problemas*/
static void printFloat(std::string input)
{
    float val;
    std::istringstream box(input);

    box >> val;
    if ((val > 0 && val < 127))
    {
        if (std::isprint(val))   
            std::cout << "Char: " << "'" << static_cast<char>(val) << "'" << std::endl;
        else
            std::cout << "Char: non displayable" << std::endl;       
    }
    else
        std::cout << "Char: impossible" << std::endl;
    
    if (static_cast<int>(val) <= INT_MIN || static_cast<int>(val) >= INT_MAX)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(val) << std::endl;
        
    if (std::floor(val) == val)
        std::cout << std::fixed << std::setprecision(1);
    std::cout << "Float: " << val <<  'f' << std::endl;
    double k = static_cast<double>(val);
    if (std::floor(k) == k)
        std::cout << std::fixed << std::setprecision(1);
    std::cout << "Double: " << k << std::endl;
}

static void printDouble(double val, std::string input)
{
    if (!checkInt(input))
        std::cout << "int: " << static_cast<int>(val) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    
    errno = 0;
    float j = std::strtof(input.c_str(), NULL);
    if (errno == ERANGE)
        std::cout << "float: impossible" << std::endl;
    else
    {
        j = static_cast<float>(val);
        if (std::floor(j) == j)
            std::cout << std::fixed << std::setprecision(1);
        std::cout << "Float: " << j <<  'f' << std::endl;
    }
    std::cout << "double: " << val << std::endl;
        
}


void ScalarConverter::convert(std::string input)
{
    int opc = checkLiteralType(input);
    checkSpecialType(opc, input);
    std::cout << "******************" <<std::endl;
    std::cout << opc <<std::endl;

    switch(opc)
    {
        case CHAR:
            printChar(input[0]);//feito
            break;
        
        case INT:
            printInt(input);//feito
            break;
        
        case FLOAT:
            printFloat(input);//feito
            break;
        
        case DOUBLE:
            printDouble(std::strtod(input.c_str(), NULL), input);//emfalta
            break;
        case SPECIAL:
            std::cout << RED << "SPERCIAL" << RESET << std::endl;
            break;
        case INF:
            std::cout << RED << "INF" << RESET << std::endl;
            break;
        default:
            std::cout << RED << "Invalid type!" << RESET << std::endl;
            break;
    }
}
