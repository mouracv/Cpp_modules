/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:43:45 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/14 13:00:56 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>
#include <string>
#include <exception>


template<typename T>
class Array
{
    public:
        Array(void);  
        Array(const Array& copy);  
        Array& operator=(const Array& other);
        ~Array(void); 

        int size(void);
        T& operator[](int index);
    
    public:
        class Boundary : public std::exception
        {
            public:
                Boundary(void);
                ~Boundary(void);
                const char *what() const throw();
        }
};





#endif