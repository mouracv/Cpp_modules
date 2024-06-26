/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:52:17 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/19 16:10:28 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie *alex = newZombie("twiliit");
    alex->announce();
    delete alex;
    
    randomChump("SAITAMA");
    randomChump("GENOS");
    randomChump("KAMUI");

    Zombie *lo = newZombie("Marvin");
    lo->announce();
    delete lo;
    return (0);    
}
