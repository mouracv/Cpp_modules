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

// /temporario
#include <cstdlib>
#include <cstring>

class Fixed
{
    private:
        int fixed_point_number;
        int const store_point_bits;

    public:
        // Fixed(void);
        // Fixed(std::string name);
        // Fixed(const Fixed& copy);
        // Fixed& operator=(const Fixed& other);
        // ~Fixed(void); sofia95s 932 402 080

        // int getRawBits(void) const;
        // void setRawBits( int const raw );
};



#endif