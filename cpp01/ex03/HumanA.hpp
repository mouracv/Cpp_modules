/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:20:55 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/19 18:48:45 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP  

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon& _obj;
    public:
        HumanA(std::string new_name, Weapon& knife);
        ~HumanA(void);
    
        void attack(void);
};




#endif