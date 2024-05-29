/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:23:53 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/29 16:16:42 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name) : AForm(name, 145, 137)
{
    std::cout << GREEN << "ShrubberyCreationForm " << this->getName() << " constructor called!" << RESET << std::endl;
    
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& copy) : AForm(copy)
{
    std::cout << GREEN << "ShrubberyCreationForm " << this->getName() << " copy constructor called!" << RESET << std::endl;
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
        AForm::operator=(other);
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << RED << "ShrubberyCreationForm " << this->getName() << " constructor called!" << RESET << std::endl;
    
}


//Overwriten functions

void ShrubberyCreationForm::beExecute() const
{
    std::ofstream outputFile;

    outputFile.open(this->getName()+"_shrubbery");
    if (!outputFile.is_open())
    {
        std::cerr << RED << "Error in open the output file!" << RESET << std::endl;
        return;
    }

    outputFile << "                      ___" << std::endl;
    outputFile << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    outputFile << "             ,-'          __,,-- \\" << std::endl;
    outputFile << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    outputFile << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    outputFile << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    outputFile << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    outputFile << "     (     ,-'                  `." << std::endl;
    outputFile << "      `._,'     _   _             ;" << std::endl;
    outputFile << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    outputFile << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    outputFile << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    outputFile << "                \"Hb HH dF" << std::endl;
    outputFile << "                 \"HbHHdF" << std::endl;
    outputFile << "                  |HHHF" << std::endl;
    outputFile << "                  |HHH|" << std::endl;
    outputFile << "                  |HHH|" << std::endl;
    outputFile << "                  |HHH|" << std::endl;
    outputFile << "                  |HHH|" << std::endl;
    outputFile << "                  dHHHb" << std::endl;
    outputFile << "                .dFd|bHb.               o" << std::endl;
    outputFile << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    outputFile << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    outputFile << "##########################################" << std::endl;
    outputFile.close();    
}
