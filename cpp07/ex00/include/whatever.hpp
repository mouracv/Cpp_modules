/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:02:24 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/13 15:47:46 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T& val1, T& val2)
{
    T tmp = val1;
    val1 = val2;
    val2 = tmp;
}

template<typename T>
T& min(T& val1,  T& val2){
    return((val1 < val2) ? val1 : val2);
}

template<typename T>
T& max(T& val1,  T& val2){
    return((val1 > val2) ? val1 : val2);
}

#endif


// Implement the following function templates:
// • swap: Swaps the values of two given arguments. Does not return anything.

// • min: Compares the two values passed in its arguments and returns the smallest
// one. If the two of them are equal, then it returns the second one.

// • max: Compares the two values passed in its arguments and returns the greatest one.
// If the two of them are equal, then it returns the second one.

// These functions can be called with any type of argument. The only requirement is
// that the two arguments must have the same type and must support all the comparison
// operators