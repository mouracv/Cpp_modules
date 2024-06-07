/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:53:55 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/07 16:34:39 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer(void) 
{
    
}

Serializer::Serializer(const Serializer& copy)
{
    (void)copy;
}

Serializer& Serializer::operator=(const Serializer& other)
{
    (void) other;
    return(*this);
}

Serializer::~Serializer(void)
{
    
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t result = reinterpret_cast<uintptr_t>(ptr);
    return(result);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* result = reinterpret_cast<Data*>(raw);
    return(result);
}