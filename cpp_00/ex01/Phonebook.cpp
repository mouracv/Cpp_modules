/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:31:59 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/17 18:15:33 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


Phonebook::Phonebook(void) 
: idx(0), contact_saved(0)
{
    
}

static void    choose_field(Contact& contact_list, int opc, std::string& input)
{
    if (!opc)
        contact_list.setFirstName(input);
    else if (opc == 1)
        contact_list.setLastName(input);
    else if (opc == 2)
        contact_list.setNicktName(input);
    else if (opc == 3)
        contact_list.setPhoneNumber(input);
    else if (opc == 4)
        contact_list.setSecret(input);
    return;
}

int trim(std::string& input)
{    
    size_t index = input.find_first_not_of(" \t");
   
    if (index != std::string::npos)
        input.erase(0, index);
    
    index = input.find_last_not_of(" \t");
    if (index != std::string::npos)
        input.erase(index + 1);
    
    index = input.find_first_of(" \t");
    while (!input.empty() && index != std::string::npos)
    {
        size_t last = input.find_first_not_of(" \t", index);
        if (last == std::string::npos)
            return (1);
        if (last != std::string::npos && last > index)
            input.erase((index), (last - (index)));
        if (!input.empty())
            input.insert(index, " ");
        index = input.find_first_of(" \t", (index + 1));
    }
    return (0);
}

void Phonebook::excuteAdd(void)
{
    int option = 0;
    std::string input;

    std::cout << std::endl;
    
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
        {
            std::cout << std::endl << std::endl;
            return;
        }
        // if (option < 3)
        //     trim(input);
        // std::cout << "(" << input << ")" << std::endl;
        if ((trim(input) || input.empty()))
        {
            std::cerr << "Invalid field, please try again!" << std::endl;
            continue;
        }
        choose_field(this->info[this->idx], option, input);
        option++;
    }
    std::cout << std::endl << "Please press enter to continue!\n";
    std::getline(std::cin, input);
    if (this->contact_saved < 8)
        this->contact_saved++;
    this->idx++;
}


void display_info(Contact& contact_list)
{
    std::cout << std::endl;
    std::cout << "First name: " << contact_list.getFirstName() << std::endl;
    std::cout << "Last name: " << contact_list.getLastName() << std::endl;
    std::cout << "Nickname: " << contact_list.getNicktName() << std::endl;
    std::cout << "Phonenumber: " << contact_list.getPhoneNumber() << std::endl;
    std::cout << "Darkest sercret: " << contact_list.getSecret() << std::endl;
}


void display_table(const std::string& output)
{
    if (output.length() > 10)
    {
        for (int i = 0; i < 9; i++){
            std::cout << output[i];
        }
        std::cout << ".|";
    }
    else
    {
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << output << '|';
    }
}

void Phonebook::excuteSearch(void)
{
    std::string input;
    int         index;
    
    if (this->contact_saved == 0)
    {
        std::cout << std::endl << "No contacts saved yet!\n" << std::endl;
        return;
    }
    
    std::cout << std::endl << std::endl  << '+' << std::setfill('-') << std::setw(44) << '+' << std::endl;
    std::cout << '|' << "     Index" << '|' << "First Name"  << '|' ;
    std::cout << " Last Name"  << '|' << "  Nickname"  << '|' << std::endl ;
    
    for (int i = 0; i < this->contact_saved; i++)
    {
        std::cout << '|' << "         " << (i + 1) << "|";
        display_table(this->info[i].getFirstName());
        display_table(this->info[i].getLastName());
        display_table(this->info[i].getNicktName());
        std::cout << std::endl;
    }
    
    std::cout << '+' << std::setfill('-') << std::setw(44) << '+' << std::endl;
    std::cout << std::endl << std::endl;
    
    while (1)
    {
        std::cout << "Please select a index: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            break;
        index = std::atoi(input.c_str());
        if (!input.compare("exit"))
            break;
        else if (index <= 0 || index > 8 || (index) > this->contact_saved)
        {
            std::cerr << "Invalid index, try gain!" << std::endl << std::endl;
            continue;
        }
        else
        {
            display_info(this->info[index - 1]);
            break;
        }
    }
    std::cout << std::endl << std::endl;
}
