/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:42:13 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/21 15:32:19 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << GREEN <<"Ice " <<_type << " : constructor called!!" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
    std::cout << GREEN <<"Ice " << _type << " : copy constructor called!!" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
    {
        std::cout << YELLOW <<"Ice " << _type << " : copy operator called!!" << std::endl;
        AMateria::operator=(other);
    }
    return(*this);
}

Ice::~Ice(void)
{
    std::cout << RED <<"Ice " <<_type << " : destructor called!!" << std::endl;
}


//overwrite function
AMateria* Ice::clone() const
{
    std::cout << MAGENTA << "A clone of " << this->getType() << " was made!" << RESET << std::endl;
    AMateria* tmp = new Ice(*this);
    
    return(tmp);
}

void Ice::use(ICharacter& target) const{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
