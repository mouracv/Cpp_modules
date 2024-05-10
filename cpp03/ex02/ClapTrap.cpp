

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
: _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(10)
{
    std::cout << GREEN << "ClapTrap " << _name << " contructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string nick) 
: _name(nick), _hitPoints(10), _energyPoints(10), _attackDamage(10)
{
    std::cout << GREEN << "ClapTrap " << _name << " contructor called" << RESET << std::endl;
}

ClapTrap::~ClapTrap(void){
    std::cout << RED << "ClapTrap " << _name << " destructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << CYAN << "ClapTrap " << _name << " copy contructor called";
    std::cout << RESET << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << CYAN << "Copy operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

//Methods
void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0)
    {
        std::cout << BLUE << "ClapTrap " << _name << " is alredy dead!" << RESET << std::endl;
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout << BLUE <<  "ClapTrap " << _name << " is out of energy!" << RESET << std::endl;
        return ;
    }
    std::cout << YELLOW << "ClapTrap " << _name << " attacks " << target;
    std::cout << ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << BLUE << "ClapTrap " << _name << " is alredy dead!" << RESET << std::endl;
        return ;
    }
    _hitPoints -= amount;
    std::cout << YELLOW << "ClapTrap " << _name << " as taken " << amount;
    std::cout << " of damage!" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amout)
{
    if (_hitPoints <= 0)
    {
        std::cout << BLUE << "ClapTrap " << _name << " is alredy dead!" << RESET << std::endl;
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout << BLUE <<  "ClapTrap " << _name << " is out of energy!" << RESET << std::endl;
        return ;
    }
    if (_hitPoints == 10)
    {
        std::cout << BLUE << "ClapTrap hitPoints is full!" << RESET << std::endl;
        return ;
    }
    for (int i = amout; (i > 0 && _hitPoints < 10); i--){
        _hitPoints++;
    }
    _energyPoints--;
    std::cout << YELLOW << "ClapTrap was repaired!" << RESET << std::endl;
}

void ClapTrap::print_status(void)
{
    std::cout << RED << "STATUS" << RESET << std::endl;
    std::cout << RED << "******************" << std::endl;
    std::cout << GREEN << "hitPoints: " << this->_hitPoints << std::endl;
    std::cout << "energyPoints: " << this->_energyPoints << std::endl;
    std::cout << "attackdamage: " << this->_attackDamage << std::endl;
    std::cout << RED << "******************" << RESET << std::endl;
}
