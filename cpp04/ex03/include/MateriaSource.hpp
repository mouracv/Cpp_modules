/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:55:34 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/22 16:11:59 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AllClass.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*   _bag[4];
    
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource& copy);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource(void);
        
        //Overwrite Methods
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};


#endif

