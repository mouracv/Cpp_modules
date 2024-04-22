/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:20:55 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/22 11:48:06 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP  

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon& _knife;
    public:
        HumanA(std::string new_name, Weapon& knife);
        ~HumanA(void);
    
        void attack(void);
};


#endif