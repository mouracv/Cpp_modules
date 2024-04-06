/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:31:59 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/05 17:32:16 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>
 #include <ctype.h>
 #include <stdlib.h>
 #include <strings.h>
 #include <string.h>




class Carros
{
    public:
        Carros(int fuel_value, int size, char *name);
        ~Carros();
        
        int fuel;
        int tamanho;
        char *marca;
        void   car_print(void);
};

void   Carros::car_print(void)
{
    std::cout << "metodo chamado kkkk" << std::endl;
}

Carros::Carros(int fuel_value, int size, char *name)
    : fuel(fuel_value), tamanho(size), marca(name) //lista de inicializazao
{
    std::cout << "Constructor called" << std::endl;
    return ;
}

Carros::~Carros()
{
    std::cout << "DESTRUCTOR  called" << std::endl;
    free(this->marca);
    return ;
}


 int main()
 {
    Carros alex(100, 20, strdup("BUGGATI"));
    
    std:: cout << alex.marca << " tem um comprimento de " << alex.tamanho << " e tam a capacidade de guardar " << alex.fuel << std::endl;
    alex.car_print();
    return (0);
 }
 
