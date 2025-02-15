/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:52:16 by aleperei          #+#    #+#             */
/*   Updated: 2025/02/01 17:48:24 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string drakest_secret;        
    
    public:
        Contact(void);
        
        void setFirstName(std::string& name);
        void setLastName(std::string& last_name);
        void setNicktName(std::string& nick_name);
        void setPhoneNumber(std::string& number);
        void setSecret(std::string& sercret);

        const std::string& getFirstName(void) const;
        const std::string& getLastName(void) const;
        const std::string& getNicktName(void) const;
        const std::string& getPhoneNumber(void) const;
        const std::string& getSecret(void) const;
};


#endif
