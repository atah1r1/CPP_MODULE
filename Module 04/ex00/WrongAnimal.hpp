/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:26:25 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 09:27:14 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal(void);
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &obj);            // copy constructor
    WrongAnimal &operator=(const WrongAnimal &obj); // assignment operator

    std::string getType(void) const;

    void makeSound(void) const;
};

#endif
