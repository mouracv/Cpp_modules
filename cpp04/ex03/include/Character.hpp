/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:23:10 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/23 14:46:52 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string     _name;
        AMateria*   _inventory[4];
        AMateria*   _trash[TRASH_SIZE];
        
    
    public:
        Character(void);
        Character(std::string name);
        Character(const Character& copy);
        Character& operator=(const Character& other);
        ~Character(void);

        //Overwrite functions
        std::string const& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};



#endif