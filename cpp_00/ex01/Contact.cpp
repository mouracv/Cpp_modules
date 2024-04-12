/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:56:40 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/12 18:09:28 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//CONSTRUCTOR
Contact::Contact(void)
{
    
}

//SETERS
void Contact::setFirstName(std::string name){
    this->first_name = name;
    return;
}

void Contact::setLastName(std::string& last_name){
    this->first_name = last_name;
    return;
}

void Contact::setNicktName(std::string& nick_name){
    this->first_name = nick_name;
    return;
}

void Contact::setPhoneNumber(std::string& number){
    this->first_name = number;
    return;
}

void Contact::setSecret(std::string& sercret){
    this->first_name = sercret;
    return;
}


//GETERS
const std::string& Contact::getFirstName(void) const{
    return(this->first_name);
}

const std::string& Contact::getLastName(void) const{
    return (this->last_name);
}

const std::string& Contact::getNicktName(void) const{
    return (this->nick_name);
}

const std::string& Contact::getPhoneNumber(void) const{
    return (this->phone_number);
}

const std::string& Contact::getSecret(void) const{
    return (this->drakest_secret);
}

