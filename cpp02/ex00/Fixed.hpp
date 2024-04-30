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
#include <cstdlib>
#include <cstring>

class Fixed
{
    public:
        Fixed(void);
        Fixed(std::string name);
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& other);
        ~Fixed(void);

        char* power;
        // int getRawBits(void) const;
        // void setRawBits( int const raw );
};



#endif