/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:07:27 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/16 16:23:20 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(const Brain& copy);
        Brain& operator=(const Brain& other);
        ~Brain(void);

        void setIdeas(std::string value);
        void printIdeas(void) const;
};








#endif