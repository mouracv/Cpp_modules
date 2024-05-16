/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:53:59 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/16 16:23:30 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
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
        void setMind(std::string value);
        void getMind(void) const;
};


#endif