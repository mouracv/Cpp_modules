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
    
    sp.mutantAddNumber();
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);

    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    sp.printSpan(); 
    // std::cout << YELLOW << "///////////////// MY TESTs /////////////////" << RESET << std::endl;
    // try
    // {
    //     Span gab(9);
    //     gab.addNumber(8);
    //     gab.longestSpan();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    
    return(0);
}