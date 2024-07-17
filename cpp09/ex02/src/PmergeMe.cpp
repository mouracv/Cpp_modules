
#include "../include/PmergeMe.hpp"

void err(int opc)
{
    std::cout << RED;
    if (opc == 1)
        std::cerr << RED << "Error: Invalid argument💀.\n";
    else if (opc == 2)
        std::cerr << RED << "Error: Invalid number❌.\n";
    else if (opc == 3)
        std::cerr << RED << "Error: Input is already sorted✅.\n";
    else if (opc == 4)
        std::cerr << RED << "Error: Invalid character.\n";
    else
        std::cerr << RED << "Error: Not enougth operators.\n";

    std::cout << END;
}

bool isSorted(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    std::vector<int>::iterator next = first;
    next++;
    last--;

    while (first != last)
    {
        if (!(*first <= *next))
            return (0);

        first++;
        next++;
    }

    return (1);
}

bool fillConteiners(char** av, std::vector<int>& vectorContent, std::list<int>& listContent)
{
    long value;
    char* end;

    errno = 0;
    for (size_t i = 1; av[i]; i++)
    {
        value = strtol(av[i], &end, 10);
        if (*end != '\0' || errno == ERANGE)
            return(err(2), 0);
        
        vectorContent.push_back(value);
        listContent.push_back(value);
    }

    if(isSorted(vectorContent.begin(), vectorContent.end()))
        return(err(3), 0);
    
    return(1);
}
