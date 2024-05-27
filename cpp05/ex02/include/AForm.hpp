/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:35:03 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/27 17:15:08 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
    private:
        const int   _requiredGrade;
        const std::string   _name;
        bool    _signed;
        int     _grade;

    public:
        //constructors
        AForm(const std::string str, int value, int rgrade);
        AForm(const AForm& copy);
        AForm& operator=(const AForm& other);
        virtual ~AForm(void);

        //Methods
        int getRequiredGrade(void) const;
        int getGrade(void) const;
        bool getSigned(void) const;
        const std::string& getName(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        void beSigned(Bureaucrat& info_b);

        //Excepton classes
            class GradeTooHighException : public std::exception{
            private:
                std::string _error_msg;
            public:
                GradeTooHighException(void) throw() : _error_msg("Grade is too high") {}
                GradeTooHighException(const std::string& msg) throw() : _error_msg(msg) {}
                ~GradeTooHighException(void) throw() {}
                const char *what() const throw() {return(_error_msg.c_str());}
        };
        
        class GradeTooLowException : public std::exception{
            private:
                std::string _error_msg;
            public:
                GradeTooLowException(void) throw() : _error_msg("Grade is too low") {}
                GradeTooLowException(const std::string& msg) throw() : _error_msg(msg) {}
                ~GradeTooLowException(void) throw() {}
                const char *what() const throw() {return(_error_msg.c_str());}
        };
};

std::ostream& operator<<(std::ostream& out, const AForm& input);

#endif