/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:21:21 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 11:48:08 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
public:
    Intern(void);
    ~Intern();

    Form *makeForm(std::string form, std::string target);
    Form *PresidentialPardon(std::string name);
    Form *ShrubberyCreation(std::string name);
    Form *RobotomyRequest(std::string name);

    class invalidForm : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

#endif