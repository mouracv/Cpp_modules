/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:35:41 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/27 18:37:47 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


int main(void)
{
    Span alex(5);

    alex.addNumber(2);
    alex.addNumber(4);
    alex.addNumber(26);
    alex.addNumber(1);
    return(0);
}