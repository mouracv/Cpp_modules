/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:31:59 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/15 16:53:13 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>  
#include "Contact.hpp"


class Phonebook
{
    private:
        Contact info[8];
        int idx;
    public:
        Phonebook(void);
        void excuteAdd(void);
        void excuteSearch(void);
};


#endif



