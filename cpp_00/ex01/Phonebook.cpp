/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:31:59 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/12 18:13:20 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


Phonebook::Phonebook(void) 
: idx(0)
{
    
}

// static void    choose_field(Contact& list, int opc, std::string& input)
// {
//     if (!opc)
//         list.setFirstName(input);
//     else if (opc == 1)
//         list.setLastName(input);
//     else if (opc == 2)
//         list.setNicktName(input);
//     else if (opc == 3)
//         list.setPhoneNumber(input);
//     else if (opc == 4)
//         list.setSecret(input);
//     return;
// }

void Phonebook::excuteAdd(void)
{
    int option = 0;
    std::string input;

    if (this->idx == 8)
        this->idx = 0;
    while (option < 5)
    {
        if (!option)
            std::cout << "First name: ";
        else if (option == 1)
            std::cout << "Last name: ";
        else if (option == 2)
            std::cout << "Nick name: ";
        else if (option == 3)
            std::cout << "Phone number: ";
        else if (option == 4)
            std::cout << "Darkest secret: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return;
        if ((input.empty()))
        {
            std::cerr << "Invalid field, please try again!" << std::endl;
            continue;
        }
        // choose_field(this->info[this->idx], option, input);
        if (!option)
            this->info[this->idx].setFirstName(input);
        else if (option == 1)
            this->info[this->idx].setLastName(input);
        else if (option == 2)
            this->info[this->idx].setNicktName(input);
        else if (option == 3)
            this->info[this->idx].setPhoneNumber(input);
        else if (option == 4)
            this->info[this->idx].setSecret(input);
        option++;
    }
    std::cout << std::endl << "Please press enter to continue!";
    std::getline(std::cin, input);
    this->idx++;
}

void Phonebook::excuteSearch(void)
{
    for (int i = 0; i < 6; i++)
    {
        std::cout << this->info[i].getFirstName() << this->info[i].getLastName() << i << std::endl;
    }
    
}
