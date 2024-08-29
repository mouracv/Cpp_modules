/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:43:45 by aleperei          #+#    #+#             */
/*   Updated: 2024/08/29 16:02:10 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>
#include <string>
#include <exception>


template<typename T> class Array
{
    private:
        T*  _content;
        unsigned int    _length;
    
    public:
        Array(void) : _content(NULL), _length(0) {};  
        
        Array(unsigned int len)
        {
            if (static_cast<int>(len) <= 0 && static_cast<int>(len) > 10000)
                throw(Array<T>::Boundary());
            
            _length = len;
            _content = new T[len];
        }  
        
        Array(const Array& copy) : _content(NULL), _length(0)
        {
            *this = copy;
        }
          
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                if (this->_content && other._content)
                {
                    delete [] this->_content;
                    this->_content = new T[other._length];
                    this->_length = other._length;
                    for (unsigned int i = 0; i < this->_length; i++)
                        this->_content[i] = other._content[i];
                }
        
            }
            return(*this);
        }
        
        ~Array(void)
        {
            if (_content)
                delete [] _content;
        } 

        int size(void) const {
            return(static_cast<int>(_length));
        }
        
        T& operator[](int index) const
        {
            if (index < 0 || index >= size())
                throw(Array<T>::Boundary());
            
            return(_content[index]);  
        }
    
    public:
        class Boundary : public std::exception
        {
            public:
                const char *what() const throw(){return("The value is out of bounds!");}
        };
};

#endif