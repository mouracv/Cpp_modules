/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:52:48 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/08 18:00:56 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << b << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    //aqui
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

// int main() {
//     // Criando alguns objetos Fixed para testar os operadores de comparação
//     Fixed a(5.5f);
//     Fixed b(7.7f);
//     Fixed c(5.5f);
//     // Testando os operadores de comparação
//     std::cout << "a > b: " << (a > b) << std::endl;
//     std::cout << "a < b: " << (a < b) << std::endl;
//     std::cout << "a == b: " << (a == b) << std::endl;
//     std::cout << "a != b: " << (a != b) << std::endl;
//     std::cout << "a >= b: " << (a >= b) << std::endl;
//     std::cout << "a <= b: " << (a <= b) << std::endl;
//     std::cout << "a == c: " << (a == c) << std::endl;
//     return 0;
// }

// int main() {
//     Fixed a(10);
//     Fixed b(5);
//     std::cout << "a: " << a << " b: " << b << std::endl;
//     Fixed addition = a + b;
//     Fixed subtraction = a - b;
//     Fixed multiplication = a * b;
//     Fixed division = a / b;
//     std::cout << "Addition: " << addition.getRawBits() << std::endl;
//     std::cout << "Subtraction: " << subtraction.getRawBits() << std::endl;
//     std::cout << "Multiplication: " << multiplication.getRawBits() << std::endl;
//     std::cout << "Division: " << division.getRawBits() << std::endl;
//     return 0;
// }

// int main() {
//     Fixed a(10);
//     std::cout << "Valor inicial: " << a.getRawBits() << std::endl;
//     // Testando operadores de incremento
//     std::cout << "Incremento prefixado: " << (++a).getRawBits() << std::endl;
//     std::cout << "Valor após incremento: " << a.getRawBits() << std::endl;
//     std::cout << "Incremento pós-fixado: " << (a++).getRawBits() << std::endl;
//     std::cout << "Valor após incremento pós-fixado: " << a.getRawBits() << std::endl;
//     // Testando operadores de decremento
//     std::cout << "Decremento prefixado: " << (--a).getRawBits() << std::endl;
//     std::cout << "Valor após decremento: " << a.getRawBits() << std::endl;
//     std::cout << "Decremento pós-fixado: " << (a--).getRawBits() << std::endl;
//     std::cout << "Valor após decremento pós-fixado: " << a.getRawBits() << std::endl;
//     return 0;
// }