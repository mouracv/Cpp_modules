/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:41:01 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/31 11:55:24 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"


int	main()
{
	Intern someRandomIntern;
	AForm* rrf = NULL;
	AForm* ppf = NULL;
	AForm* scf = NULL;
	AForm* noForm = NULL;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	ppf = someRandomIntern.makeForm("ShrubberyCreationForm", "Fender");
	scf = someRandomIntern.makeForm("presidential pardon", "Xender");
	noForm = someRandomIntern.makeForm("not a form", "Lender");
	noForm = someRandomIntern.makeForm("", "Lender");

	std::cout << std::endl;
	if (rrf)
	std::cout << *rrf << std::endl;
	if (ppf)
	std::cout << *ppf << std::endl;
	if (scf)
	std::cout << *scf << std::endl;
	if (noForm)
		std::cout << *noForm << std::endl;

	if (rrf)
		delete rrf;
	if (ppf)
		delete ppf;
	if (scf)
		delete scf;
	if (noForm)
		delete noForm;
}