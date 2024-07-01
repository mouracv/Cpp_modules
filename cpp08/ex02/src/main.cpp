/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:04:01 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/30 19:04:11 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "First print: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Second print: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    
    mstack.push(0);
    std::cout << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "Mutant Loop: " << *it << std::endl;
        ++it;
    }

    std::cout << std::endl;
    std::stack<int> s(mstack);
    while (!s.empty())
    {
        std::cout << "Stack Loop: " << s.top() << std::endl;
        s.pop();
    }
    return 0;
}