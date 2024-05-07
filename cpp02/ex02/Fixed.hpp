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

        //Operators
        Fixed& operator=(const Fixed& other);

        Fixed& operator+(const Fixed& other);
        Fixed& operator-(const Fixed& other);
        Fixed& operator*(const Fixed& other);
        Fixed& operator/(const Fixed& other);

        bool operator>(const Fixed& other);
        bool operator<(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator==(const Fixed& other);
        bool operator!=(const Fixed& other);
};

std::ostream& operator<<(std::ostream& out, const Fixed& other);

#endif