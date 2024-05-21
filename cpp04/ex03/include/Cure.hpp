/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:27:37 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/21 14:23:54 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AllClass.hpp"


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
