
#include "../include/PmergeMe.hpp"

void err(int opc)

{
    std::cerr << RED;
    if (opc == 1)
        std::cerr << "Error: Invalid argument💀.\n";
    else if (opc == 2)
        std::cerr << "Error: Invalid number❌.\n";
    else if (opc == 3)
        std::cerr << "Error: Input is already sorted✅.\n";

    std::cerr << END;
}

void printVector(const std::vector<int>& vec) {
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it;
        if ((it + 1) != vec.end())
            std::cout << ", ";
    }
    
}

long long getTime()
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec * 1000000LL + tv.tv_usec;
}

void print_lista(const std::list<int>& lista) {
    std::list<int>::const_iterator it;
    std::list<int>::const_iterator next;

    for (it = lista.begin(); it != lista.end(); ++it) {
        std::cout << *it;
        next = it;
        if (++next != lista.end())
            std::cout << ", ";
    }
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
        if (*end != '\0' || errno == ERANGE || value < 0)
            return(err(2), 0);
        
        vectorContent.push_back(value);
        listContent.push_back(value);
    }

    if(isSorted(vectorContent.begin(), vectorContent.end()))
        return(err(3), 0);
    
    return(1);
}

void printText(std::vector<int> copy)
{
    std::cout << "Before: ";
    for(size_t i = 0; i < 5 ; i++)
        std::cout << copy[i] << ' ';

    if (copy.size() > 5)
        std::cout << "[...]";
    std::cout << std::endl;
    
    std::sort(copy.begin(), copy.end());
    
    std::cout << "Afther: ";
    for(size_t i = 0; i < 5 ; i++)
        std::cout << copy[i] << ' ';

    if (copy.size() > 5)
        std::cout << "[...]";
    std::cout << std::endl;
}

void printResult(long long begin, long long end, std::vector<int>* vec, std::list<int>* lst, int size)
{
    std::cout << "Time to process a range of " << size << " elements with std::";

    if (vec)
    {
        std::cout << "vector[";
        if (vec->size() > 5)
            std::cout << "...] : ";
        else
        {
            printVector(*vec);
            std::cout << "] : ";
        }
    }
    else
    {
        std::cout << "list[";
        if (lst->size() > 5)
            std::cout << "...] : ";
        else
        {
            print_lista(*lst);
            std::cout << "] : ";
        }
    }

    std::cout << (end - begin) << " us" << std::endl;
}