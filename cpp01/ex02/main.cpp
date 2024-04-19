/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:36:14 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/19 18:28:58 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"

#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << std::endl;
    
    std::cout << GREEN << "Memory address of brain: " << &brain << RESET << std::endl;
    std::cout << YELLOW << "Memory address of stringPTR: " << stringPTR << RESET << std::endl;
    std::cout << RED << "Memory address of stringREF: " << &stringREF << RESET << std::endl;

    std::cout << std::endl;
    
    std::cout << GREEN << "Value of brain: " << brain << RESET << std::endl;
    std::cout << YELLOW << "Value of stringPTR: " << *stringPTR << RESET << std::endl;
    std::cout << RED << "Value of stringREF: " << stringREF << RESET << std::endl;

    std::cout << std::endl;
    
    return (0);
}