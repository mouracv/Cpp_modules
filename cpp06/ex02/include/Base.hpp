/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:13:03 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/10 12:18:40 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"

class Base
{
    public:
        virtual ~Base(void);  
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif