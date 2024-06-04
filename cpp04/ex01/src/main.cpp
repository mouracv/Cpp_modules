/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:41:01 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/04 14:04:49 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
    const Animal *animal[6];

    for(int i = 0; i < 6; i++)
    {
        if(i < 3)
        {
            std:: cout << YELLOW << "-----------------\nCREATE OBJECT DOG\n -----------------" << RESET << std::endl;
            animal[i] = new Dog();
            
        }
        else
        {
            std:: cout << YELLOW << "-----------------\nCREATE OBJECT CAT\n -----------------" << RESET << std::endl;
            animal[i] = new Cat();
        }
    }

    for (int i = 0; i < 6; i++){
        std:: cout << YELLOW << "-----------------\nDELETED OBJECT MIAU\n -----------------" << RESET << std::endl;
        delete animal[i];
    }
    std:: cout << YELLOW << "--------------------------------------------------------------" << RESET << std::endl;
    std:: cout << YELLOW << "-----------------\nTESTS OF COPIES!!!!\n -----------------" << RESET << std::endl;
    std:: cout << YELLOW << "--------------------------------------------------------------" << RESET << std::endl;
    
    std:: cout << YELLOW << "-----------------\nCREATE OBJECT JOHN\n -----------------" << RESET << std::endl;
    Cat john;
    
    std:: cout << YELLOW << "-----------------\nCREATE COPY JOHN (KAINE)\n -----------------" << RESET << std::endl;
    Cat kaine(john);
    
    
    std:: cout << YELLOW << "-----------------\nIDEAS OF JOHN!!!\n -----------------" << RESET << std::endl;
    john.setMind("I want fish today!!");
    john.getMind();

    
    std:: cout << YELLOW << "-----------------\nIDEAS OF KAINE!!!\n -----------------" << RESET << std::endl;
    kaine.getMind();
        
    std:: cout << YELLOW << "-----------------\nDESTRUCTORS\n -----------------" << RESET << std::endl;
    	
    return (0);
}

// std:: cout << YELLOW << "-----------------\nCREATE KAINE\n -----------------" << RESET << std::endl;
// Cat kaine;

// std:: cout << YELLOW << "-----------------\nCOPY JONH TO KAINE\n -----------------" << RESET << std::endl;
// kaine = john;
// std:: cout << YELLOW << "-----------------\nIDEAS OF JOHN!!!\n -----------------" << RESET << std::endl;