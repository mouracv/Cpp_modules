/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:34:33 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/30 16:50:03 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern(void)
{
    
}

Intern::Intern(const Intern& copy)
{
    *this = copy;
}

Intern& Intern::operator=(const Intern& other)
{
    (void) other;
    return(*this);
}

Intern::~Intern(void)
{
    
}

AForm* Intern::makeForm(std::string formName, std::string target) const
{
    std::string allForm[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int pos = 0;
    AForm* result = NULL;
    
    for (size_t i = 0; i < 3; i++)
    {
        if (!formName.compare(allForm[i]))
            break;
        pos++;
    }

    switch (pos)
    {
        case 0:
            result = new ShrubberyCreationForm(target);
            break;
        case 1:
            result = new RobotomyRequestForm(target);
            break;
        case 2:
            result = new PresidentialPardonForm(target);
            break;
        default:
            std::cout << RED << formName << " form don't exist!" << RESET << std::endl;
            break;
    }
    if (result)
        std::cout << MAGENTA << "Intern creates " << result->getName() << RESET << std::endl;
    return(result);
}


