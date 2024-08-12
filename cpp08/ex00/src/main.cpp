/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:42:22 by aleperei          #+#    #+#             */
/*   Updated: 2024/08/12 12:28:11 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.h"


void printDeque(const std::deque<int>& dq) {
    for (std::deque<int>::const_iterator it = dq.begin(); it != dq.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void printVector(const std::vector<int>& vec) {
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it;
        if ((it + 1) != vec.end())
            std::cout << ", ";
    }
    std::cout << std::endl;
}

void print_lista(const std::list<int>& lista) {
    // Declarando um iterador para percorrer a lista
    std::list<int>::const_iterator it;
    std::list<int>::const_iterator next;

    for (it = lista.begin(); it != lista.end(); ++it) {
        std::cout << *it;
        next = it;
        if (++next != lista.end())
            std::cout << ", ";
    }
    std::cout << std::endl;
}

template<typename T>
int fill_cont(T& target, size_t len)
{
    for (size_t i = 0; i < len; i++)
    {
        target.push_back(rand() % (20 - 0 + 1));
    }
    return(rand() % (20 - 0 + 1));
}

template<typename T>
void    print_cont(T& target, typename T::iterator it, std::string name)
{
    if(it != target.end())
        std::cout << name << " value is in " << std::distance(target.begin(), it) << " position!" << std::endl; 
    else
        std::cout << name << " value not found!"<< std::endl;
}

int main(void)
{
    
    srand(time(NULL));
    int find;
    
    std::vector<int> alex;
    find = fill_cont(alex, 7);
    printVector(alex);
    std::cout << "Number to find " << find << std::endl;
    print_cont(alex, easyfind(alex, find), "Alex");

    
    std::list<int> gab;
    find = fill_cont(gab, 10);
    std::cout << std::endl;
    print_lista(gab);
    std::cout << "Number to find " << find << std::endl;
    print_cont(gab, easyfind(gab, find), "Gab");

    std::deque<int> leo;
    find = fill_cont(leo, 11);
    std::cout << std::endl;
    printDeque(leo);
    std::cout << "Number to find " << find << std::endl;
    print_cont(leo, easyfind(leo, find), "Leo");
   
    
    alex.clear();
    gab.clear();
    leo.clear();
    return(0);   
}