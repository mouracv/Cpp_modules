

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string     _name;
        int     _hitPoints;
        int     _energyPoints;
        int     _attackDamage;

    public:
        ClapTrap(void);
        ClapTrap(std::string nick);
        ~ClapTrap(void);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};



#endif