/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:28:04 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/24 16:55:27 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../include/AllClass.hpp"
#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"

int main(void)
{
    std::cout << YELLOW << "///////////////////////////// ";
    std::cout << YELLOW << "42 TESTS ";
    std::cout << YELLOW << "///////////////////////////// " << RESET;
    std::cout << std::endl << std::endl;
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    std::cout << std::endl << std::endl;
    std::cout << YELLOW << "///////////////////////////// ";
    std::cout << YELLOW << "MY TESTS ";
    std::cout << YELLOW << "///////////////////////////// " << RESET;
    std::cout << std::endl << std::endl;


    std::cout << BLUE << "Creating characters" << RESET<< std::endl;
    ICharacter* harry = new Character("Harry");
    ICharacter* teodore = new Character("Teodore");
    ICharacter* karen = new Character("Karen");

    
    std::cout << std::endl << BLUE << "Harry and Teodore likes Karen so they will figth for her..." << RESET<< std::endl << std::endl;
    
    harry->equip(new Ice());
    harry->equip(new Cure());

    teodore->equip(new Ice);
    teodore->equip(new Ice);
    teodore->equip(new Cure());
    
    karen->equip(new Ice());
    karen->equip(new Ice());
    karen->equip(new Ice());
    karen->equip(new Cure());
    karen->unequip(3);
    std::cout << std::endl << BLUE << "The figth begins..." << RESET<< std::endl << std::endl;

    harry->use(0, *teodore);
    harry->use(1, *harry);
    teodore->use(2, *teodore);
    teodore->use(0, *harry);
    teodore->use(1, *harry);
    
    std::cout << std::endl;
    delete harry;
    
    std::cout << std::endl << BLUE << "Teodore wins the figth, and he ask Karen hand for marriage. She stop for a second and said:" << RESET<< std::endl;
    karen->use(0, *teodore);
    karen->use(1, *teodore);
    karen->use(2, *teodore);
    
    std::cout << std::endl;
    delete teodore;
    
    std::cout << std::endl << BLUE << "In the she didn't love any of them, a evil world we livin in. And everyone live happy till the end. " << RESET<< std::endl;
    IMateriaSource *bag = new MateriaSource();
    bag->learnMateria(new Ice());
    bag->learnMateria(new Cure());

    karen->equip(bag->createMateria("Ice"));
    karen->equip(bag->createMateria("sun"));
    
    delete bag;
    delete karen;
    return 0;
}
