#ifndef FIXED_HPP
#define FIXED_HPP


#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"  

#include <iostream>
#include <string>
#include <math.h>


class Fixed
{
    private:
        int _fixed_point_number;
        static const int _store_point_bits = 8;

    public:
        //Constructors and Destructors
        Fixed(void);
        Fixed(const int raw);
        Fixed(const float raw);
        Fixed(const Fixed& copy);
        ~Fixed(void);

        //METHODS
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        //Copy operator
        Fixed& operator=(const Fixed& other);
        //Increment/Decrement
        Fixed   operator++(int);
        Fixed   operator--(int);
        Fixed&  operator++(void);
        Fixed&  operator--(void);
        //Arithmetic operators
        Fixed   operator+(const Fixed& other) const;
        Fixed   operator-(const Fixed& other) const;
        Fixed   operator*(const Fixed& other) const;
        Fixed   operator/(const Fixed& other) const;
        //Comparison operators
        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

        //extra
        static Fixed& max(Fixed& n1, Fixed& n2);
        static Fixed& min(Fixed& v1, Fixed& v2);
        static const Fixed& max(const Fixed& n1, const Fixed& n2);
        static const Fixed& min(const Fixed& v1, const Fixed& v2);

};

std::ostream& operator<<(std::ostream& out, const Fixed& other);

#endif