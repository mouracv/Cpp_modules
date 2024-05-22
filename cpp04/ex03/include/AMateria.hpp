/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:22:04 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/22 17:30:13 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP


#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AllClass.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string     _type;
    
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(const AMateria& copy);
        AMateria& operator=(const AMateria& other);
        virtual ~AMateria(void);

        //Methods
        std::string const & getType(void) const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) const;
};


#endif