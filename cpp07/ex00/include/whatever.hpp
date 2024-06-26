/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:02:24 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/21 17:56:48 by aleperei         ###   ########.fr       */
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