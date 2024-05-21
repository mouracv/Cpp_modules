/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:55:34 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/21 12:00:12 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AllClass.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource& copy);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource(void);
        
        //Overwrite Methods
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};


#endif

