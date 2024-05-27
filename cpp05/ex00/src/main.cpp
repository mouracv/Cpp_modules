/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:41:01 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/27 12:20:48 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main()
{
    Bureaucrat alex("alex", 10);
    try
    {
        alex.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << alex;
    std::cout << std::endl;

    try
    {
        Bureaucrat andre("andre", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    Bureaucrat andre("andre", 150);
    std::cout << andre;
    
    try
    {
        alex.decrementGrade();
        andre.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    std::cout << andre;
    std::cout << alex;
    
    std::cout << std::endl;

    try
    {
        Bureaucrat teste("teste", 1);
        Bureaucrat miguel("miguel", 150);
        miguel = teste;
        miguel.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    return 0;
}
