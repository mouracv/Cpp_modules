/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:41:01 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/15 16:54:20 by aleperei         ###   ########.fr       */
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

    for(int i = 0; i < 6; i++){
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
    
    // std:: cout << YELLOW << "-----------------\nCREATE OBJECT MINGAU\n -----------------" << RESET << std::endl;
    // Cat mingau;
    
    // std:: cout << YELLOW << "-----------------\nCREATE COPY MINGAU (MILK)\n -----------------" << RESET << std::endl;
    // Cat milk(mingau);
    
    // std::string *ideas;
    
    // std:: cout << YELLOW << "-----------------\nIDEAS OF MINGAU!!!\n -----------------" << RESET << std::endl;
    // mingau.getBrain()->setIdeas("I want fish today!!");
    // ideas = mingau.getBrain()->getIdeas();
    // for(int i=0; i<2; i++)
    //     std::cout << "ideas of mingau: " << ideas[i] << std::endl;
    
    // std:: cout << YELLOW << "-----------------\nIDEAS OF MILK!!!\n -----------------" << RESET << std::endl;
    // ideas = milk.getBrain()->getIdeas();
    // for(int i=0; i<2; i++)
    //     std::cout << "ideas: " << ideas[i] << std::endl;
        
    // std:: cout << YELLOW << "-----------------\nDESTRUCTORS\n -----------------" << RESET << std::endl;
    	
    return (0);
}
