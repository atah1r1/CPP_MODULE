/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 08:33:45 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 09:16:56 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_HPP
#define SHRUBBERY_CREATION_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string target;

public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);            // copy constructor
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj); // assignment operator

    void execute(Bureaucrat const &executor) const;
};

#endif