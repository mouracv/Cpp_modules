#include "../include/RPN.hpp"


int isToken(char c)
{
    if (c == '+' || c == '/' || c == '-' || c == '*')
        return(1);
    return(0);
}

void RPN(std::string arg)
{
    std::istringstream box(arg);
    std::stack<int> dataStack;

    for (size_t i = 0; i < arg.size(); i++)
    {
        // if (isdigit(arg[i]) && isToken(arg[i]) && isspace())
        // {

        // }
        // else if (isToken(arg[i]))
        // {

        // }
    }
    
}

int main(int ac, char **av)
{
    if (ac != 2)
        return((std::cerr << RED << "Error: Invalid argument💀.\n" << END), 1);
    
    RPN(av[1]);
    return(0);
}
