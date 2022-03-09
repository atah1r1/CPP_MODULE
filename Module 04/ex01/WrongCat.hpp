/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:28:06 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 09:28:58 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    ~WrongCat();
    WrongCat(const WrongCat &obj);            // copy constructor
    WrongCat &operator=(const WrongCat &obj); // assignment operator

    std::string getType(void) const;

    void makeSound(void) const;
};

#endif