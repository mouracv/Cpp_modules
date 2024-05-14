/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:53:59 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/14 18:05:20 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _mind;
    public:
        Dog(void);
        Dog(const Dog& copy);
        Dog& operator=(const Dog& other);
        ~Dog(void);

        void makeSound(void) const;
};


#endif