#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB 
{
    private:
        std::string _name;
        Weapon* _knife;
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void attack(void);
        void setWeapon(Weapon& obj);
};


#endif