/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:26:10 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/20 17:34:45 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Character.hpp"

Character::Character(std::string name) : _name(name)
{

}



/*-----------------------------------Overwrite functions---------------------------------*/

std::string const& Character::getName() const{
    return(this->_name);
}

void Character::equip(AMateria* m)
{
    
}

void Character::unequip(int idx)
{
    
}

void Character::use(int idx, ICharacter& target)
{
    
}
