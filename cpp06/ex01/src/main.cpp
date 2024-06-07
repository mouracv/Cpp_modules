/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:52:17 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/07 16:35:40 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

int main()
{
    {
	Data		original = {29};
	Data*		ptr;
	uintptr_t	value;

	std::cout << std::endl << "Value of original age: " << original.age << std::endl;
	std::cout << "------SERIALIZING------" << std::endl;
	value = Serializer::serialize(&original);
	std::cout << "------DESERIALIZING------" << std::endl;
	ptr = Serializer::deserialize(value);
	std::cout << &original << "  " << &*ptr << std::endl;
	std::cout << std::endl << "Value of ptr age: " << ptr->age << std::endl;
	}

    return (0);    
}
