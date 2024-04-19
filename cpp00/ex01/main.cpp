/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:18:28 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/18 13:45:05 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void set_visual(void)
{
    std::cout <<"+-------------------------+"<< std::endl;
    std::cout <<"|                         |"<< std::endl;
    std::cout <<"|The program only accepts:|"<< std::endl;
    std::cout <<"|                         |"<< std::endl;
    std::cout <<"|- ADD                    |"<< std::endl;
    std::cout <<"|- SEARCH                 |"<< std::endl;
    std::cout <<"|- EXIT                   |"<< std::endl;
    std::cout <<"+-------------------------+"<< std::endl;
}

void execute_cmd(std::string& input, Phonebook& list)
{
    if (!input.compare("ADD")) 
        list.excuteAdd();
    else if (!input.compare("SEARCH"))
        list.excuteSearch();
}

int main(void)
{
    Phonebook list;
    std::string input;
    
    while (1)
    {
        set_visual();
        std::cout << std::endl << "Prompt: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            break;
        }
        if (input.empty())
            continue;
        if (input.compare("ADD") && input.compare("SEARCH") && input.compare("EXIT"))
        {
            std::cerr << std::endl << "Invalid input!" << std::endl;
            continue;
        }
        else if (!input.compare("SEARCH") || !input.compare("ADD"))
            execute_cmd(input, list);
        else if (!input.compare("EXIT"))
            break;        
    }
    return (0);
}
 