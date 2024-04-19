/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:53:41 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/19 18:37:13 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m" 

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(void);
        ~Zombie();
        
        void announce( void );
        void setname(std::string str);
};

Zombie* zombieHorde( int N, std::string name );

#endif