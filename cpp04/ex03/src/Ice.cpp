/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:42:13 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/22 17:45:24 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << GREEN <<"Ice " <<_type << " : constructor called!!" << RESET << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
    std::cout << GREEN <<"Ice " << _type << " : copy constructor called!!" << RESET << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
    {
        std::cout << YELLOW <<"Ice " << _type << " : copy operator called!!" << RESET << std::endl;
        AMateria::operator=(other);
    }
    return(*this);
}

Ice::~Ice(void)
{
    std::cout << RED <<"Ice " <<_type << " : destructor called!!" << RESET << std::endl;
}


//overwrite function
AMateria* Ice::clone() const
{
    std::cout << MAGENTA << "A clone of " << this->getType() << " was made!" << RESET << std::endl;
    AMateria* tmp = new Ice(*this);
    
    return(tmp);
}

void Ice::use(ICharacter& target) const{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
