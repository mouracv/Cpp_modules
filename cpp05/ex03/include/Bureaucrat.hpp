/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:30:29 by aleperei          #+#    #+#             */
/*   Updated: 2024/05/29 16:20:29 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"

// #include <stdexcept>
# include <iostream>
# include <exception>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string _name;
        int     _grade;
    
    public:
        //Form
        Bureaucrat(const std::string str, int value);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat(void);

        //Methods
        void incrementGrade(void);
        void decrementGrade(void);
        int getGrade(void) const;
        const std::string& getName(void) const;
        void signForm(AForm& info_f);
        void executeForm(AForm const & form);

    //execption classes
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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& info);

#endif