
#include "../include/PmergeMe.hpp"

void sortList(std::list<int>& content)
{
    if (content.size() == 1)
        return;
    
    std::list<int>::iterator next = ++content.begin();
    std::list<int>::iterator prev = content.begin();
    std::list<int> mins, maxs;
    
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

    sortList(mins);

    for (next = maxs.begin(); (next != maxs.end()); next++)
        mins.insert(std::upper_bound(mins.begin(), mins.end(), *next), *next);

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

    sortVector(mins);

    for (size_t i = 0; i < maxs.size(); i++)
        mins.insert(std::upper_bound(mins.begin(), mins.end(), maxs[i]), maxs[i]);
    
    content = mins;
}

void PmergeMe(char **av)
{
    std::vector<int> vectorContent;
    std::list<int> listContent;
    long long startvec;
    long long startlst;
    long long endvec;
    long long endlst;


    if (!fillConteiners(av, vectorContent, listContent))
    {
        vectorContent.clear();
        listContent.clear();
        return;
    }
    printText(vectorContent);
    std::cout << std::endl;
    
    startvec = getTime();
    sortVector(vectorContent);
    endvec = getTime();

    
    startlst = getTime();
    sortList(listContent);
    endlst = getTime();

    printResult(startvec, endvec, &vectorContent, NULL, vectorContent.size());
    printResult(startlst, endlst, NULL, &listContent, vectorContent.size());
}

int main(int ac, char** av)
{
    if (ac <= 2)
        return(err(1), 1);
    
    PmergeMe(av);
    return(0);
}
