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
    if (size > 100000)
        throw(Span::Boundary("N is too big!"));
    
    _N = size;
    _content.reserve(size);
}

Span::Span(const Span& copy)
{
    *this = copy;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->_N = other._N;
        this->_content = other._content;
    }
    return(*this);
}

Span::~Span(void)
{

}

void Span::addNumber(int value)
{
    if (_content.size() == _content.capacity())
        throw(Span::Boundary("Span class is full!"));
    else
        _content.push_back(value);
}

void Span::upgradeAddNumber(void)
{
    srand(time(NULL));
    try
    {
        for (size_t i = _content.size(); i < _content.capacity(); i++)
            addNumber(rand() % 10000 - 0 + 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Span::mutantRange(void)
{
    srand(time(NULL));
    if (_content.size() == _content.capacity())
        throw(Span::Boundary("Span class is full!"));

    std::vector<int> tmp;
    tmp.reserve(_content.capacity());
    for (size_t i = 0; i <tmp.capacity(); i++)
        tmp.push_back(rand() % (10000 - 0 + 1));
  
    _content.insert((_content.begin() + _content.size()),\
        (tmp.begin() + _content.size()), tmp.end());
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
    if (_content.size() != _content.capacity())
        throw(Span::Boundary("Span class is not full to print!"));
    
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
