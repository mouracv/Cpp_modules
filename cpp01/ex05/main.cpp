/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:10:31 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/24 16:56:28 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Harl.hpp"

int main(void)
{
    Harl alex;
    
    alex.complain("DEBUG");
    alex.complain("INFO");
    alex.complain("WARNING");
    alex.complain("ERROR");
    return (0);
} 
