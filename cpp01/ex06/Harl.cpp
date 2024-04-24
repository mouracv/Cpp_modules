/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:37:13 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/24 17:28:29 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void){}

void Harl::complain(std::string level)
{
    std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int opc;
    for (opc = 0; opc < 4; opc++)
    {
        if (level == options[opc])
            break;
    }
    
    switch (opc)
    {
        case 0:
            this->debug();
            //fall
        case 1:
            this->info();
            //fall
        case 2:
            this->warning();
            //fall
        case 3:
            this->error();
            break;
        default:
            std::cerr << RED << "Invalid level!" << RESET << std::endl;
            break;
    }

}

void Harl::debug(void)
{
    std::cout << BLUE << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my"; 
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
    std::cout << RESET << std::endl << std::endl;
}
void Harl::info(void)
{
    std::cout << GREEN << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe believe adding extra bacon costs more money. You didn’t put";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << RESET << std::endl << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << "years whereas you started working here since last month.";
    std::cout << RESET << std::endl << std::endl;
}

void Harl::error(void)
{
    std::cout << RED << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << RESET << std::endl;
}

