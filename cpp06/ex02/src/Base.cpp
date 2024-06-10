/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:14:42 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/10 12:22:21 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Base.hpp"

Base::~Base(void){}


Base * generate(void)
{
    Base* result = NULL;

    srand(time(NULL));
    int opc = 1 + std::rand() % (3 - 1 + 1);

    switch (opc)
    {
        case 1:
            result = new A();
            break;
        case 2:
            result = new B();
            break;
        case 3:
            result = new C();
            break;
    }
    return(result);
}

void identify(Base* p)
{
    A* res1 = dynamic_cast<A*>(p);
    if (res1)
        return((std::cout << GREEN << "Class Type is A" << RESET << std::endl), (void)0);
    
    B* res2 = dynamic_cast<B*>(p);
    if (res2)
        return((std::cout << GREEN << "Class Type is B" << RESET << std::endl), (void)0);
    
    C* res3 = dynamic_cast<C*>(p);
    if (res3)
        return((std::cout << GREEN << "Class Type is C" << RESET << std::endl), (void)0);
    
    std::cout << RED << "Unknown Class Type!" << RESET << std::endl;
    return;
}
void identify(Base& p)
{
    try
    {
        A& res1 = dynamic_cast<A&>(p);
        (void) res1;
        std::cout << GREEN << "Class Type is A" << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& res2 = dynamic_cast<B&>(p);
            (void) res2;
            std::cout << GREEN << "Class Type is B" << RESET << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& res3 = dynamic_cast<C&>(p);
                (void) res3;
                std::cout << GREEN << "Class Type is C" << RESET << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << RED << "Unknown Class Type!" << RESET << std::endl;
            }
        }
    }
    
}