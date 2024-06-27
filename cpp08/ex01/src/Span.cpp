/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:26:05 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/27 18:42:15 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


Span::Span(unsigned int size)
{
    if (size > 10000)
        throw(Span::Error::Error("N is too big!"));
    
    _content.reserve(size);
}

Span::Span(const Span& copy)
{
    (void)copy;
}

Span& Span::operator=(const Span& other)
{
    (void)other;
    return(*this);
}

Span::~Span(void){}

void Span::addNumber(int value)
{
    static int idx;
    
    if (_content.size() == _content.capacity())
        throw(Span::Error::Error("Span class is full!"));
    else
        _content.insert(_content.begin() + idx++, value);
}

int Span::shortestSpan(void)
{
    int dist = INT32_MAX;
    std::vector<int> tmp(_content);
    
    std::sort(tmp.begin(), tmp.end());
    for (size_t i = 0; i < tmp.size() - 1; i++)
    {
        int current_dist = tmp[i + 1] - tmp[i];
        if (current_dist < dist)
            dist = current_dist;
    }
    return(dist);
}

int Span::longestSpan(void)
{
    std::vector<int> tmp(_content);
    
    std::sort(tmp.begin(), tmp.end());
    return((tmp.back() - tmp.front()));
}


/***************************EXCEPTION CLASS************************/

Span::ErrorSpan::ErrorSpan(std::string response){
    _error_msg = response;
}

const char* Span::ErrorSpan::what() const throw(){
    return(_error_msg.c_str());
}