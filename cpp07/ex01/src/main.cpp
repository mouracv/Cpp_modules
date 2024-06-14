/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:22:48 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/14 12:29:01 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"


int main(void)
{
    int a[3] = {5, 6, 7};
    iter(a, 3, add);
    std::cout << "a= "; print_val(a, 3); std::cout << std::endl;
    
    std::string b[3] = {"five", "six", "seven"};
    iter(b, 3, add); 
    std::cout << "b= "; print_val(b, 3); std::cout << std::endl;
    
    float c[3] = {1.3, 2432.4, -56.94};
    iter(c, 3, add);
    std::cout << "c= "; print_val(c, 3); std::cout << std::endl;

    int d[3] = {'\0'};
    iter(d, 3, add);
    std::cout << "b= "; print_val(d, 3); std::cout << std::endl;
    return 0;
}