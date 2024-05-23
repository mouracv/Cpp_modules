/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:34:45 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/23 14:19:32 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() : _type("unknown"){
    std::cout << GREEN << "AMateria: " << _type << " constructor called!!" << RESET << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type){
    std::cout << GREEN << "AMateria: " << _type << " constructor called!!" << RESET << std::endl;
}

AMateria::AMateria(const AMateria& copy) : _type(copy.getType()){
    std::cout << GREEN << "AMateria: " << _type << " copy constructor called!!" << RESET << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        std::cout << YELLOW << "AMateria: " << _type << " copy operator called!!" << RESET << std::endl;
        this->_type = other.getType();
    }
    return(*this);
}

AMateria::~AMateria(){
    std::cout << RED << "AMateria: " << _type << " destructor called!!" << RESET << std::endl;
}


std::string const & AMateria::getType(void) const {
    return (this->_type);
}

void AMateria::use(ICharacter& target) const
{
    (void) target;
    std::cout << BLUE << "The function needs to be implemented in the derived class.";
    std::cout << RESET << std::endl;
}

