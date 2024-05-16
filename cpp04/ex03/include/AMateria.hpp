/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:22:04 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/16 17:43:08 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 

#include <iostream>
#include <string>

class AMateria
{
    protected:
        std::string     _type;
    public:
        AMateria(std::string const & type);
        std::string const & getType(void) const; //Returns the materia type
        virtual AMateria* clone() const = 0;
    // [...]
    // virtual void use(ICharacter& target);
};


#endif