/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:41:01 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/14 16:34:58 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;

    std::cout << std::endl << YELLOW << "WRONG TEST" << RESET << std::endl << std::endl;
    
    const WrongAnimal* alex = new WrongAnimal();
    const WrongAnimal* andre = new WrongCat();
    std::cout << alex->getType() << " " << std::endl;
    std::cout << andre->getType() << " " << std::endl;
    alex->makeSound();
    andre->makeSound();

    delete alex;
    delete andre;
    
    return 0;
}
