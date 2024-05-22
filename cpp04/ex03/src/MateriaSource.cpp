/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:01:31 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/22 16:39:26 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << GREEN << "MateriSource: constructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++){
        _bag[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    std::cout << GREEN << "MateriSource: copy constructor called!" << std::endl;
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
        std::cout << YELLOW << "MateriSource: copy operator called!" << std::endl;
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
}

MateriaSource::~MateriaSource(void)
{
    std::cout << YELLOW << "MateriSource: destructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_bag[i])
            delete this->_bag[i];
    }
    
}


/*-----------------------------------Overwrite functions---------------------------------*/
void    MateriaSource::learnMateria(AMateria* m)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_bag[i])
        {
            this->_bag[i] = m->clone();
            return ;
        }
    }
    std::cout << RED << "You cannot learn a new materia!" << RESET << std::endl;
    // learnMateria(AMateria*)
    // Copies the Materia passed as a parameter and store it in memory so it can be cloned
    // later. Like the Character, the MateriaSource can know at most 4 Materias. They
    // are not necessarily unique.
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
    // createMateria(std::string const &)
    // Returns a new Materia. The latter is a copy of the Materia previously learned by
    // the MateriaSource whose type equals the one passed as parameter. Returns 0 if
    // the type is unknown
}  


