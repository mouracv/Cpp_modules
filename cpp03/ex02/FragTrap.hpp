/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:22:21 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/10 16:42:50 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        ~FragTrap(void);
        FragTrap(std::string nick);
        FragTrap(const FragTrap& copy);
        FragTrap& operator=(const FragTrap& copy);
        
        void highFivesGuys(void);
};






#endif