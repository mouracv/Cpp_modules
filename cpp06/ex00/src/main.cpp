/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:52:17 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/04 16:20:59 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"


int main(int ac, char** av)
{
    if (ac != 2 || !av[1][0])
        return((std::cerr << "Wrong input" << std::endl), 1);
    else
        ScalarConverter::convert(av[1]);
    return (0);    
}
