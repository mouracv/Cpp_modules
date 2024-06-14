/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 11:54:34 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/14 12:18:42 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void    print_val(T& val, size_t len)
{
    for (size_t i = 0; i < len; i++)
        std::cout << val[i] << ", ";
    
}

template<typename T>
T   add(T val)
{
    val += 42;
    return(val);
}

template<typename T>
void    iter(T* arr, size_t len, T (*func)(T))
{
    for (size_t i = 0; i < len; i++)
    {
        arr[i] = func(arr[i]);
    }
    return ; 
}


#endif