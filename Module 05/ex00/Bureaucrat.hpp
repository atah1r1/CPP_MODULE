/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:55:13 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/11 00:11:53 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    unsigned int grade;

public:
    Bureaucrat();
    Bureaucrat(std::string, unsigned int);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &obj);            // copy constructor
    Bureaucrat &operator=(const Bureaucrat &obj); // assignment operator

    std::string getName(void) const;
    unsigned int getGrade(void) const;

    void increment(void);
    void decrement(void);

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
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif