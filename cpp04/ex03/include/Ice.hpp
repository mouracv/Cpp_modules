/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:39:44 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/22 16:58:47 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice& copy);
        Ice& operator=(const Ice& other);
        ~Ice(void);

        //METHODS
        AMateria* clone() const;
        void use(ICharacter& target) const;
};

#endif