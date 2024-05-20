/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:42:13 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/20 17:11:22 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << GREEN <<"Ice " <<_type << " :constructor called!!" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria("ice")
{
    
}

Ice& Ice::operator=(const Ice& other)
{
    
}

Ice::~Ice(void)
{
    
}


//overwrite function
AMateria* Ice::clone() const
{
    
}

void Ice::use(ICharacter& target) const
{
    std::cout << "* shoots an ice bolt at <name> *" << std::endl;
}
