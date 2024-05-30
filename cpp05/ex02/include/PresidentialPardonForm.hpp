/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:25:55 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/30 14:49:46 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
    public:
        //CONSTRUCTORS
        PresidentialPardonForm(const std::string name);  
        PresidentialPardonForm(const PresidentialPardonForm& copy);  
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);  
        ~PresidentialPardonForm(void);

        //Overwriten function
        void beExecute() const;
};






#endif
