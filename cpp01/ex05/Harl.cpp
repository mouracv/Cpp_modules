/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:37:13 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/24 16:55:48 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void){}

void Harl::complain(std::string level)
{
    int i;
    std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*ptr[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (i = 0; i < 4; i++)
    {
        if (level == options[i])
        {
            (this->*ptr[i])();
            return;
        }
    }
    if (i == 4)
        std::cout << RED << "Invalid level!" << RESET << std::endl;
}

void Harl::debug(void)
{
    std::cout << BLUE << "I love having extra bacon for my"; 
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
    std::cout << RESET << std::endl;
}
void Harl::info(void)
{
    std::cout << "I cannot believe believe adding extra bacon costs more money. You didn’t put";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << RESET << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << "years whereas you started working here since last month.";
    std::cout << RESET << std::endl;
}

void Harl::error(void)
{
    std::cout << RED << "This is unacceptable! I want to speak to the manager now.";
    std::cout << RESET << std::endl;
}

