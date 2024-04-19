/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:34:17 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/19 17:27:16 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if ( N <= 0 || N > 100000)
    {
        std::cerr << GREEN << "Invalid number for the order!" << RESET << std::endl;
        return (NULL);    
    }
    
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        horde[i].setname(name);
    }
    
    return (horde);
}