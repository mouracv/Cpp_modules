/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:15:06 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/22 12:51:33 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    std::cout << BLUE << "42 TESTS" << RESET << std::endl << std::endl;
    {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }

    std::cout << std::endl << BLUE << "MY TESTS" << RESET << std::endl << std::endl;

    Weapon excalibur = Weapon("excalibur");

    HumanA alex = HumanA("alex", excalibur);
    alex.attack();

    HumanB andre = HumanB("andre");
    andre.setWeapon(excalibur);
    andre.attack();
    
    excalibur.setType("zanguetsu");

    andre.attack();
    alex.attack();
    
    return 0;
}
