/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:31:57 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/10 14:14:16 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);  
        ScavTrap(std::string nick);  
        ~ScavTrap(void); 
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap& other);
        
        void guardGate();
        void attack(const std::string& target);  
};


#endif