/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:31:59 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/08 16:50:42 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>
 #include <ctype.h>
 #include <stdlib.h>
 #include <strings.h>
 #include <string.h>




class Carros
{
    private:
        char *_matricula;

    
    public:
        Carros(int fuel_value, int size, char *name, char *matricula);
        ~Carros();
        
        int fuel;
        int tamanho;
        char *marca;
        void set_matricula(char *str);
        char*  get_matricula(void) const;
        void   car_print(void) const;
};

void   Carros::car_print(void) const
{
    std::cout << "metodo chamado com sucesso" << std::endl;
}

Carros::Carros(int fuel_value, int size, char *name, char *matricula)
    : fuel(fuel_value), tamanho(size), marca(name) //lista de inicializazao
{
    std::cout << "Constructor called" << std::endl;
    this->set_matricula(matricula);
    return ;
}

Carros::~Carros()
{
    std::cout << "DESTRUCTOR  called" << std::endl;
    free(this->marca);
    free(this->_matricula);
    return ;
}

void  Carros::set_matricula(char *str)
{
    this->_matricula = str;
    return;
}

char*  Carros::get_matricula(void) const
{
    return(this->_matricula);
}


 int main()
 {
    Carros alex(100, 20, strdup("BUGGATI"), strdup("UA-91-EU"));
    
    std:: cout << alex.marca << "print 1 tem um comprimento de " << alex.tamanho << " e tam a capacidade de guardar " << alex.fuel << std::endl;
    alex.car_print();
    std:: cout << "a maticula do carro e " << alex.get_matricula() << std::endl;
    return (0);
 }
 
