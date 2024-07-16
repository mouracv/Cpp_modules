#include "../include/RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2 || !av[1][0])
        return(err(1), 1);
    
    RPN(av[1]);
    return(0);
}
