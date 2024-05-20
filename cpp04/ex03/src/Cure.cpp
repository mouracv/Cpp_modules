/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:56:27 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/20 17:12:29 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << GREEN <<"Cure " <<_type << " :constructor called!!" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria("cure")
{

}

Cure& Cure::operator=(const Cure& copy)
{

}

AMateria* Cure::clone() const
{
    
}

void Cure::use(ICharacter& target) const
{
    std::cout << "* heals <name> wounds *" << std::endl;
}
