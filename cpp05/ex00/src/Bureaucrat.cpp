/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:07:23 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/24 18:13:40 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("unknown"), _grade(150)
{
    
}

Bureaucrat::Bureaucrat(const std::string str, int value) : _name(str)
{
    if (value < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (value > 150)
        throw(Bureaucrat::GradeTooLowException());
    _grade = value;

}
