/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:52:21 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/30 19:04:28 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 

#include <iostream>
#include <string>
#include <deque>
#include <stack>
#include <list>


template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void)
        {

        }

        MutantStack(const MutantStack& copy){
            *this = copy;
        }

        MutantStack& operator=(const MutantStack& other)
        {
            if (this != &other)
            {
                this->c = other.c;
            }

            return(*this);
        }

        ~MutantStack(void) {}
    
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(void){
            return(this->c.begin());
        }

        iterator end(void){
            return(this->c.end());
        }
};


#endif