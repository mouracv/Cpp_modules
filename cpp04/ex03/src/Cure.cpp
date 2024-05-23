/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:56:27 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/23 14:21:02 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << GREEN <<"Cure: " <<_type << " constructor called!!" << RESET << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy)
{
    std::cout << GREEN <<"Cure: " << _type << " copy constructor called!!" << RESET << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
    {
        std::cout << YELLOW <<"Cure: " << _type << " copy operator called!!" << RESET << std::endl;
        AMateria::operator=(other);
    }
    return (*this);
}

Cure::~Cure(void)
{
    std::cout << RED <<"Cure: " <<_type << " destructor called!!" << RESET << std::endl;    
}

AMateria* Cure::clone() const
{
    std::cout << MAGENTA << "A clone of " << this->getType() << " was made!" << RESET << std::endl;
    AMateria* tmp = new Cure(*this);
    
    return(tmp);
}

void Cure::use(ICharacter& target) const{
    std::cout << "* heals " << target.getName() << " wounds *" << RESET << std::endl;
}
