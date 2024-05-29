/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:35:03 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/29 12:52:15 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool    _signed;
        const int   _signGrade;
        const int   _executeGrade;

    public:
        //constructors
        Form(const std::string str, int value, int rgrade);
        Form(const Form& copy);
        Form& operator=(const Form& other);
        ~Form(void);

        //Methods
        int getExecuteGrade(void) const;
        int getSignGrade(void) const;
        bool getSigned(void) const;
        const std::string& getName(void) const;
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

std::ostream& operator<<(std::ostream& out, const Form& input);

#endif