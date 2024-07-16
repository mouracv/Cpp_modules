
#include "../include/PmergeMe.hpp"

void err(int opc)
{
    std::cout << RED;
    if (opc == 1)
        std::cerr << RED << "Error: Invalid argument💀.\n";
    else if (opc == 2)
        std::cerr << RED << "Error: Invalid division for 0.\n";
    else if (opc == 3)
        std::cerr << RED << "Error: Not enougth numbers for calculation.\n";
    else if (opc == 4)
        std::cerr << RED << "Error: Invalid character.\n";
    else
        std::cerr << RED << "Error: Not enougth operators.\n";

    std::cout << END;
}



