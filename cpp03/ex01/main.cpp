/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:39:47 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/16 15:46:11 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{

	ClapTrap clap1("kaine");
	std::cout << std::endl;

	ScavTrap scav1("jonh wick");
	std::cout << std::endl;

	clap1.attack("john wick");
	scav1.takeDamage(20);
	scav1.print_status();	

	std::cout << std::endl;
	scav1.attack("kaine");
	clap1.takeDamage(10000);
	clap1.print_status();
	std::cout << std::endl;
	clap1.beRepaired(100);
	return 0;
}