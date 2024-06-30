/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:18:47 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/28 14:19:41 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>
#include <climits>
#include <cstdlib>

class Span 
{
    private:
        unsigned int _N;
        std::vector<int> _content;
        
    public:
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span& other);
        ~Span(void);

        void printSpan(void);
        int longestSpan(void);
        int shortestSpan(void);
        void addNumber(int value);
        void mutantRange(void);
        void upgradeAddNumber(void);
    
    public:
        class Boundary : public std::exception
        {
            private:
                std::string _error_msg;
            public:
                Boundary(std::string msg) throw();
                ~Boundary(void) throw();
                const char* what(void) const throw();
        };
};




#endif