/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:28:04 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/22 17:39:33 by aleperei         ###   ########.fr       */
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
    return 0;
}
