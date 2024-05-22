/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:27:37 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/22 16:58:43 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure& copy);
        Cure& operator=(const Cure& other);
        ~Cure(void);

        //Overwrite
        AMateria* clone() const;
        void use(ICharacter& target) const;
};

#endif
