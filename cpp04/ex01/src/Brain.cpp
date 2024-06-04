/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:19:37 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/04 14:14:06 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(void)
{
    std::cout << GREEN << "Brain constructor called!" << RESET << std::endl;
}

Brain::Brain(const Brain& copy) 
{
    std::cout << YELLOW << "Brain copy constructor called!" << RESET << std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << YELLOW << "Brain operator called!" << RESET << std::endl;
    if (this != &other)
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << RED << "Brain destructor called!" << RESET << std::endl;
}

void Brain::setIdeas(std::string value)
{
    static int i;
    
    if (i == 100)
    {
        std::cout<< "aaaa" << std::endl;
        return;
    }
    this->_ideas[i] = value;
    i++;
}

void Brain::printIdeas(void) const
{
    for (size_t i = 0; (i < 5 && !this->_ideas[i].empty()) ; i++){
        std::cout << this->_ideas[i] << std::endl;
    }   
}

