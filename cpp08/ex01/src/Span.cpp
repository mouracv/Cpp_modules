/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:26:05 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/28 14:43:56 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


Span::Span(unsigned int size)
{
    if (size > 10000)
        throw(Span::Boundary("N is too big!"));
    
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
        throw(Span::Boundary("Span class is full!"));
    else
        _content.insert(_content.begin() + idx++, value);
}

void Span::mutantAddNumber(void)
{
    srand(time(NULL));
    std::vector<int>::iterator beg = _content.begin();
    
    while (beg != _content.end())
    {
        beg = _content.insert(beg, (rand() % (100 - 0 + 1)));
        std::cout << "val: " << *beg << std::endl;
        beg++;
    }
}

int Span::shortestSpan(void)
{
    if (_content.size() < _content.capacity())
        throw(Span::Boundary("Not enougth elements to compare!"));
    
    int dist = INT_MAX;
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
    if (_content.size() < _content.capacity())
        throw(Span::Boundary("Not enougth elements to compare!"));
    
    std::vector<int> tmp(_content);
    
    std::sort(tmp.begin(), tmp.end());
    return((tmp.back() - tmp.front()));
}

void Span::printSpan(void)
{
    // if (_content.size() != _content.capacity())
    //     throw(Span::Boundary("Span class is not full to print!"));
    
    std::cout << MAGENTA << "Span content: ";
    std::vector<int>::iterator it;
    for (it = _content.begin(); it != _content.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << RESET << std::endl;
}

/***************************EXCEPTION CLASS************************/

Span::Boundary::Boundary(std::string response) throw() 
: _error_msg(response){}

Span::Boundary::~Boundary(void)throw() {}

const char* Span::Boundary::what() const throw(){
    return(_error_msg.c_str());
}
