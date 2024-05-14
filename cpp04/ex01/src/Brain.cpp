/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:19:37 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/14 18:04:48 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(void)
{
    std::cout << GREEN << "Brain constructor called!" << RESET << std::endl;
    setIdeas("I'm the SUN!!");
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
        this->setIdeas(other._ideas[0]);
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << RED << "Brain destructor called!" << RESET << std::endl;
}

void Brain::setIdeas(std::string value)
{
    for (size_t i = 0; i < 100; i++)
    {
        this->_ideas[i] = value;
    }
}

void Brain::showIdeas(void)
{
    for (size_t i = 0; i < 100; i++){
        std::cout << this->_ideas[i] << std::endl;
    }   
}

