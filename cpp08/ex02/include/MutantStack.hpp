/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:52:21 by aleperei          #+#    #+#             */
/*   Updated: 2024/09/02 16:17:31 by aleperei         ###   ########.fr       */
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

/*
    This will allow us to specify the base container when we declare a 
    MutantStack object and if we dont specify the class will use 
    std::deque as the base conteiner 
*/

template<typename T, typename U = std::deque<T> >
class MutantStack : public std::stack<T, U>
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
        // typedef typename std::stack<T>::container_type::iterator iterator;
        // You can do it in a way or another
        typedef typename U::iterator iterator;
        typedef typename U::const_iterator const_iterator;
        typedef typename U::reverse_iterator reverse_iterator;
        typedef typename U::const_reverse_iterator const_reverse_iterator;

        iterator begin(void){ return(this->c.begin()); }
        iterator end(void){ return(this->c.end()); }
        
        const_iterator cbegin(void){ return(this->c.cbegin()); }
        const_iterator cend(void){ return(this->c.cend()); }

        reverse_iterator rbegin(void){ return(this->c.rbegin()); }
        reverse_iterator rend(void){ return(this->c.rend()); }

        const_reverse_iterator crbegin(void){ return(this->c.crbegin()); }
        const_reverse_iterator crend(void){ return(this->c.crend()); }

        
};


#endif