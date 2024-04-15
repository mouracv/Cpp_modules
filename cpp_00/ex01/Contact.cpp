/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:56:40 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/15 16:39:23 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//CONSTRUCTOR
Contact::Contact(void) 
: contact_saved(0)
{
    
}

//SETERS
void Contact::setFirstName(std::string& name){
    this->first_name = name;
    return;
}

void Contact::setLastName(std::string& last_name){
    this->last_name = last_name;
    return;
}

void Contact::setNicktName(std::string& nick_name){
    this->nick_name = nick_name;
    return;
}

void Contact::setPhoneNumber(std::string& number){
    this->phone_number = number;
    return;
}

void Contact::setSecret(std::string& sercret){
    this->drakest_secret = sercret;
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

