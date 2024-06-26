/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:51:11 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/25 15:05:56 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <cstdlib>

int main(void)
{
    int n;
    std::string input;

    std::cout << "Choose the number of the zombies: ";
    std::getline(std::cin, input);
    n = atoi(input.c_str());
    
    Zombie* horde = zombieHorde(n, "I like human meat!");
    
    if (!horde)
        return (1);
    for (int i = 0; i < n; i++)
    {
        horde[i].announce();
    }

    delete [] horde;
    return (0);
}
