/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ad.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:22:54 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/18 14:25:25 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie alex(name);
    
    alex.announce();
    return;
}