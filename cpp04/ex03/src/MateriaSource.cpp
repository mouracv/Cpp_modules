/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:01:31 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/23 15:12:04 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << GREEN << "MateriSource: constructor called!" << RESET << std::endl;
    for (size_t i = 0; i < 4; i++){
        _bag[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    std::cout << GREEN << "MateriSource: copy constructor called!" << RESET << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if (copy._bag[i])
            this->_bag[i] = copy._bag[i];
        else
            this->_bag[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        std::cout << YELLOW << "MateriSource: copy operator called!" << RESET << std::endl;
        for (size_t i = 0; i < 4; i++)
        {
            if (this->_bag[i])
                delete this->_bag[i];
            if (other._bag[i])
                this->_bag[i] = other._bag[i];
            else
                this->_bag[i] = NULL;
        }
    }
    return(*this);
}

MateriaSource::~MateriaSource(void)
{
    std::cout << RED << "MateriSource: destructor called!" << RESET << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_bag[i])
            delete this->_bag[i];
    }
    
}


/*-----------------------------------Overwrite functions---------------------------------*/
void    MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
    {
        std::cout << RED << "Invalid materia!" << RESET << std::endl;
        return;
    }
    for (size_t i = 0; i < 4; i++)
    {
        if (!this->_bag[i])
        {
            this->_bag[i] = m->clone();
            delete m;
            return ;
        }
    }
    delete m;
    std::cout << RED << "You cannot learn a new materia!" << RESET << std::endl;
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_bag[i] && !type.compare(this->_bag[i]->getType()))
            return (this->_bag[i]->clone());
    }
    std::cout << RED << "This materia (" << type << ") don't exist!" << RESET << std::endl;
    return (NULL);
}  


