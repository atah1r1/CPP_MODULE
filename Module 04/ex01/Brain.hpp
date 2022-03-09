/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:51:26 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 10:40:13 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

/*
     if the variables of an object have been dynamically allocated then
     it is requiredto do a Deep Copy in order to create a copy of the object.
*/

/*
    Shallow Copy: If some variables are dynamically allocated memory from heap section,
    then copied object variable will also reference then same memory location.

    Deep Copy: Make a new copy with different memory allocation, but copies the data
*/

class Brain
{
private:
    std::string ideas[100];

public:
    Brain(void);
    ~Brain();
    Brain(const Brain &obj);            // copy constructor
    Brain &operator=(const Brain &obj); // assignment operator

    void setIdeas(std::string idea);
    std::string getIdea(unsigned int i);
};

#endif