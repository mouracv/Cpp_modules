/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:28:41 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/16 15:30:59 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 


#include <iostream>
#include <string>


class Animal
{
    protected:
        std::string     _type;
    
    public:
        Animal(void);
        Animal(std::string  name);
        Animal(const Animal& copy);
        Animal& operator=(const Animal& other);
        virtual ~Animal(void);
        
        virtual void makeSound(void) const;
        std::string getType(void) const;
        void setType(std::string  name);
};



#endif