/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:39:47 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/13 14:50:59 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct("C. Guy");
	ct.attack("them");
	ct.takeDamage(5);
	ct.print_status();
	ct.beRepaired(5);
	return 0;
}
