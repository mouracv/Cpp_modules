
#include "../include/PmergeMe.hpp"

void sortList(std::list<int>& content)
{

}

void sortVector(std::vector<int>& content)
{

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
    //sortVector();
    //sortList();
}

int main(int ac, char** av)
{
    if (ac <= 2)
        return(err(1), 1);
    
    PmergeMe(av);
    return(0);
}
