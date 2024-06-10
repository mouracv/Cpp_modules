/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:52:17 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/10 12:19:15 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"


int main()
{
    std::cout <<YELLOW << "POINTERS" << RESET << std::endl;
    Base* a1 = new A();
    identify(a1);
    Base* a2 = generate();
    identify(a2);
    Base* alex = new Base();
    identify(alex);
    
    delete a1;
    delete a2;
    delete alex;
    
    std::cout << YELLOW << "REFERENCE" << RESET << std::endl;
    C a4;
    Base& a3 = a4;
    identify(a3);
    
    A a9;
    Base& a8 = a9;
    identify(a8);

    Base andre;
    Base& a7 = andre;
    identify(a7);
    return (0);    
}
