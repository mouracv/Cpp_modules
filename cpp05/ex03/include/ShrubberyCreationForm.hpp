/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:22:19 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/29 16:04:00 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <ostream>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    public:
        //CONSTRUCORS
        ShrubberyCreationForm(const std::string& name);
        ShrubberyCreationForm(ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        ~ShrubberyCreationForm(void);

        //Overwriten functions
        void beExecute() const;
};


#endif