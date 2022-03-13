/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 09:54:54 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 10:01:59 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool is_signed;
    const unsigned int gradeToSign;
    const unsigned int gradeToExec;

public:
    Form(void);
    Form(std::string, unsigned int, unsigned int);
    ~Form();
    Form(const Form &obj);            // copy constructor
    Form &operator=(const Form &obj); // assignment operator

    std::string getName(void) const;
    bool getIsSigned(void) const;
    unsigned int getGradeToSign(void) const;
    unsigned int getGradeToExec(void) const;

    void beSigned(Bureaucrat &bureaucrat);

    virtual void execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class NotSigned : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &, Form const &);

#endif