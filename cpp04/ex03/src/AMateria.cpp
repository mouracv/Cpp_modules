/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:34:45 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/16 17:45:18 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << GREEN << "AMteria : " << _type << " constructor called!!" << std::endl;
}


std::string const & AMateria::getType(void) const {
    return (this->_type);
}
