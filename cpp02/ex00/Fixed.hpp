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

class Fixed
{
    private:
        int _fixed_point_number;
        static const int _store_point_bits = 8;

    public:
        Fixed(void);
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& other);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};


#endif