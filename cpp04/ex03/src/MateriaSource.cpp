/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:01:31 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/21 12:06:53 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(void){}

MateriaSource::MateriaSource(const MateriaSource& copy){}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){}

MateriaSource::~MateriaSource(void){}

void    MateriaSource::learnMateria(AMateria*)
{
    // learnMateria(AMateria*)
    // Copies the Materia passed as a parameter and store it in memory so it can be cloned
    // later. Like the Character, the MateriaSource can know at most 4 Materias. They
    // are not necessarily unique.
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    // createMateria(std::string const &)
    // Returns a new Materia. The latter is a copy of the Materia previously learned by
    // the MateriaSource whose type equals the one passed as parameter. Returns 0 if
    // the type is unknown
}  


