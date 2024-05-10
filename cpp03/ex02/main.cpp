/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:39:47 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/10 16:45:42 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap ft("F. Guy");
	ft.attack("them");
	ft.takeDamage(5);
	ft.print_status();
	ft.beRepaired(5);
	ft.highFivesGuys();
	return 0;
}

