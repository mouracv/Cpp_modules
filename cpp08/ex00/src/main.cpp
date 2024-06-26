/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:42:22 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/26 19:17:13 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.h"


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
    print_cont(alex, easyfind(alex, find), "Alex");
   
    
    return(0);   
}