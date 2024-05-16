/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:44:34 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/16 16:23:25 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _mind;
    public:
        Cat(void);
        Cat(const Cat& copy);
        Cat& operator=(const Cat& other);
        ~Cat(void);
        
        void makeSound(void) const;
        void setMind(std::string value);
        void getMind(void) const;
        
};


#endif