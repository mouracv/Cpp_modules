/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:53:41 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/19 16:09:02 by aleperei         ###   ########.fr       */
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

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        ~Zombie();
        
        void announce( void );    
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif