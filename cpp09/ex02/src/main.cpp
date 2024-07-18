
#include "../include/PmergeMe.hpp"

void print_lista(const std::list<int>& lista) {
    // Declarando um iterador para percorrer a lista
    std::list<int>::const_iterator it;

    // Iterando pela lista e imprimindo os elementos
    for (it = lista.begin(); it != lista.end(); ++it) {
        std::cout << *it << std::endl;
    }
}

void sortList(std::list<int>& content)
{
    if (content.size() == 1)
        return;
    
    std::list<int>::iterator next = content.begin()++;
    std::list<int>::iterator prev = content.begin();
    std::list<int> mins, maxs;
    
    for (size_t i = 0; ( i < content.size() - 1); i++)
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
        prev++;
        next++;
    }

    if (content.size() % 2)
        maxs.push_back(content.back());
    
    sortList(mins);

    for (next = maxs.begin(); (next != maxs.end()); next++)
        mins.insert(std::upper_bound(mins.begin(), mins.end(), *next), *next);
    
    content = mins;
    
}

void printVector(const std::vector<int>& vec) {
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
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
    listContent.clear();
    sortVector(vectorContent);
    printVector(vectorContent);
    std::cout << YELLOW << "**********************************" << END << std::endl;
    sortList(listContent);
    print_lista(listContent);
    //sortList();
}

int main(int ac, char** av)
{
    if (ac <= 2)
        return(err(1), 1);
    
    PmergeMe(av);
    return(0);
}
