
#include "../include/PmergeMe.hpp"
#include<unistd.h>

void printVector(const std::vector<int>& vec) {
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void print_lista(const std::list<int>& lista) {
    // Declarando um iterador para percorrer a lista
    std::list<int>::const_iterator it;

    // Iterando pela lista e imprimindo os elementos
    for (it = lista.begin(); it != lista.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

void sortList(std::list<int>& content)
{
    if (content.size() == 1)
        return;
    
    std::list<int>::iterator next = ++content.begin();
    std::list<int>::iterator prev = content.begin();
    std::list<int> mins, maxs;
    
    // next++;
    for(size_t i = 0; i < (content.size() - 1); i += 2)
    {
        if (*prev <= *next)
        {
            mins.push_back(*prev);
            maxs.push_back(*next);
        }
        else
        {
            mins.push_back(*next);
            maxs.push_back(*prev);
        }

        std::advance(prev, 2);
        std::advance(next, 2);
    }

    if (content.size() % 2)
        maxs.push_back(content.back());

    // print_lista(mins);    
    // print_lista(maxs);
    std::cout << YELLOW << "Recursividade Merge" << END << std::endl;
    print_lista(mins);
    print_lista(maxs);
    std::cout << "**********************" << std::endl;

    sortList(mins);
    // return;

    std::cout << "Insertion" << std::endl;
    print_lista(mins);
    print_lista(maxs);
    std::cout << "**********************" << std::endl;

    for (next = maxs.begin(); (next != maxs.end()); next++)
        mins.insert(std::upper_bound(mins.begin(), mins.end(), *next), *next);
    
    std::cout << "Afther Insertion" << std::endl;
    print_lista(mins);
    std::cout << RED << "**********************" <<  END << std::endl;

    content = mins;
    
}

void sortVector(std::vector<int>& content)
{
    if (content.size() == 1)
        return;

    std::vector<int>::iterator it = content.begin();
    std::vector<int> mins, maxs;

    while (it != (content.end()) && (it + 1) != (content.end()))
    {
        std::cout << "Loop de divisao" << std::endl;
        if (*it <= *(it + 1))
        {
            mins.push_back(*it);
            maxs.push_back(*(it + 1));
        }
        else
        {
            mins.push_back(*(it + 1));
            maxs.push_back(*it);
        }
        it += 2;
    }
    
    if ((content.size() % 2))
        maxs.push_back(content.back());
    
    //Merge sort
    std::cout << YELLOW << "Recursividade Merge" << END << std::endl;
    printVector(mins);
    printVector(maxs);
    std::cout << "**********************" << std::endl;
    sortVector(mins);

    std::cout << "Insertion" << std::endl;
    printVector(mins);
    printVector(maxs);
    std::cout << "**********************" << std::endl;
    for (size_t i = 0; i < maxs.size(); i++)
        mins.insert(std::upper_bound(mins.begin(), mins.end(), maxs[i]), maxs[i]);
    
    std::cout << "Afther Insertion" << std::endl;
    printVector(mins);
    std::cout << "**********************" << std::endl;
    content = mins;

}

void PmergeMe(char **av)
{
    std::vector<int> vectorContent;
    std::list<int> listContent;

    if (!fillConteiners(av, vectorContent, listContent))
    {
        vectorContent.clear();
        listContent.clear();
        return;
    }

    //sortear as listas
    // listContent.clear();
    // sortVector(vectorContent);
    // printVector(vectorContent);
    std::cout << YELLOW << "**********************************" << END << std::endl;
    print_lista(listContent);
    sortList(listContent);
    // print_lista(listContent);
    //sortList();
}

/*Before: 3 5 9 7 4
After: 3 4 5 7 9
Time to process a range of 5 elements with std::[..] : 0.00031 us
Time to process a range of 5 elements with std::[..] : 0.00014 us*/

int main(int ac, char** av)
{
    if (ac <= 2)
        return(err(1), 1);
    
    PmergeMe(av);
    return(0);
}
