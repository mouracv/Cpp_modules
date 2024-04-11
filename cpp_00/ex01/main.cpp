/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:18:28 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/11 16:08:46 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void set_visual(void)
{
    std::cout <<"___________________________"<< std::endl;
    std::cout <<"|                         |"<< std::endl;
    std::cout <<"|The program only accepts:|"<< std::endl;
    std::cout <<"|                         |"<< std::endl;
    std::cout <<"|- ADD                    |"<< std::endl;
    std::cout <<"|- SEARCH                 |"<< std::endl;
    std::cout <<"|- EXIT                   |"<< std::endl;
    std::cout <<"|_________________________|"<< std::endl;

}



int main(void)
{
    // Phonebook list;
    std::string input;
    while (1)
    {
        set_visual();
        std::cout << std::endl << "Prompt: ";
        std::getline(std::cin, input);

        if (!input.compare("ADD") || !input.compare("SEARCH"))
        {
            std::cout << "alex funciona \n";
        }

        
        break;
    }

    return (0);
}
 