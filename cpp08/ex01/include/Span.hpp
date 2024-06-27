/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:18:47 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/27 18:39:47 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SPAN_HPP
#define SPAN_HPP


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>


class Span 
{
    private:
        std::vector<int> _content;
        
    public:
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span& other);
        ~Span(void);

        void addNumber(int value);
        int shortestSpan(void);
        int longestSpan(void);
    
    public:
        class ErrorSpan : public std::exception
        {
            private:
                std::string _error_msg;
            public:
                ErrorSpan(std::string msg);
                const char* what(void) const throw();
        };
};




#endif