/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:39:47 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/08 17:39:48 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct("C. Guy");
	ct.attack("them");
	ct.takeDamage(5);
	ct.beRepaired(5);
	return 0;
}


/*int main()
{

	ClapTrap claptrap1("Tiny Tina");
	std::cout << std::endl;
	
	claptrap1.setAttackDamage(50);
	std::cout << std::endl;
	
	ClapTrap claptrap2(claptrap1);
	std::cout << std::endl;
	
	ClapTrap claptrap3("Athena");
	std::cout << std::endl;
	
	claptrap3 = claptrap2;
	std::cout << std::endl;
	
	claptrap3.setName("Athena");
	std::cout << std::endl;
	claptrap1.attack("Athena");
	std::cout << std::endl;
	claptrap3.takeDamage(claptrap1.getAttackDamage());
	std::cout << std::endl;

	claptrap2.attack("Athena");
	claptrap3.takeDamage(claptrap2.getAttackDamage());
	std::cout << std::endl;

	claptrap2.setName("Mad Moxxi");
	std::cout << std::endl;

	claptrap2.beRepaired(15);
	std::cout << std::endl;

	claptrap3.attack("Tiny Tina");
	std::cout << std::endl;

	std::cout << "ClapTrap " << claptrap1.getName() << " have Hit Points: " << claptrap1.getHitPoints() << ", Energy Points: " << claptrap1.getEnergyPoints() << ", Attack Points: " << claptrap1.getAttackDamage() << std::endl;
	std::cout << "ClapTrap " << claptrap2.getName() << " have Hit Points: " << claptrap2.getHitPoints() << ", Energy Points: " << claptrap2.getEnergyPoints() << ", Attack Points: " << claptrap2.getAttackDamage() << std::endl;
	std::cout << "ClapTrap " << claptrap3.getName() << " have Hit Points: " << claptrap3.getHitPoints() << ", Energy Points: " << claptrap3.getEnergyPoints() << ", Attack Points: " << claptrap3.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	return 0;
}*/