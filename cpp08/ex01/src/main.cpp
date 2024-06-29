/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:35:41 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/28 14:33:25 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


int main(void)
{
    std::cout << YELLOW << "///////////////// 42 TEST /////////////////" << RESET << std::endl;
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    sp.printSpan(); 
    
    std::cout << YELLOW << "///////////////// MY TESTs /////////////////" << RESET << std::endl;
    try
    {
        std::cout << std::endl << BLUE;
        std::cout << "Trying search longspan with Span not full!" << RESET << std::endl;
        Span gab(9);
        gab.addNumber(8);
        gab.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl << BLUE;
    std::cout << "Filling Span with RANGE ITERATORS!" << RESET << std::endl;
    Span range1(21);
    range1.mutantRange();
    range1.printSpan();

    std::cout << std::endl << BLUE;
    std::cout << "Filling Span with Upgrade Add Number!" << RESET << std::endl;
    Span upgrade(7);
    upgrade.upgradeAddNumber();
    upgrade.printSpan();

    return(0);
}