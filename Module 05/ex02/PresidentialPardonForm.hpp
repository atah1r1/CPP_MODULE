/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 09:54:02 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 10:00:21 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_HPP
#define PRESIDENTIAL_PARDON_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;

public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &obj);            // copy constructor
    PresidentialPardonForm &operator=(const PresidentialPardonForm &obj); // assignment operator

    void execute(Bureaucrat const &executor) const;
};

#endif