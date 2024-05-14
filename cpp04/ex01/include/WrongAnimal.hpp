/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:28:41 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/14 15:46:23 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP //WrongAnimal
#define WRONGANIMAL_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 


#include <iostream>
#include <string>


class WrongAnimal
{
    protected:
        std::string     _type;
    
    public:
        WrongAnimal(void);
        WrongAnimal(std::string  name);
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& other);
        virtual ~WrongAnimal(void);
        
        void makeSound(void) const;
        std::string getType(void) const;
        void setType(std::string  name);
};



#endif