/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:22:04 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/21 15:21:57 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP


#include "AllClass.hpp"


class AMateria
{
    protected:
        std::string     _type;
    
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(const AMateria& copy);
        AMateria& operator=(const AMateria& other);

        //Methods
        std::string const & getType(void) const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) const;
};


#endif