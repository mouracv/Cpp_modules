
#include "../include/PmergeMe.hpp"

// void sortList(std::list<int>& content)
// {

// }

void sortVector(std::vector<int>& content)
{
    if (content.size() == 1)
        return;

    std::vector<int>::iterator it = content.begin();
    std::vector<int> mins;
    std::vector<int> maxs;

    while ((it + 1) != (content.end()))
    {
        // std::cout << "ALEX" << std::endl;
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
        it++;
    }
    
    if ((content.size() % 2))
        maxs.push_back(content.back());
    
    //Merge sort
    sortVector(mins);

    for (size_t i = 0; i < maxs.size(); i++)
        mins.insert(std::upper_bound(mins.begin(), mins.end(), maxs[i]), maxs[i]);
    
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
    for (size_t i = 0; i < vectorContent.size(); i++)
    {
        std::cout << vectorContent[i] << ' ';
    }
    std::cout << std::endl;
    
    //sortList();
}

int main(int ac, char** av)
{
    if (ac <= 2)
        return(err(1), 1);
    
    PmergeMe(av);
    return(0);
}
