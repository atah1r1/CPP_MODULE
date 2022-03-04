/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:11:48 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/04 20:42:00 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

/*
COPY CONSTRUCTOR: used to initialize a new object with a data of a another object
ASSIGNMENT OPERSTOR: used to replace an object data with another data of another object
*/

class Fixed
{
private:
    int fixed_number;
    static const int fractional;

public:
    Fixed(void);
    ~Fixed();
    Fixed(const Fixed &obj);            // copy constructor
    Fixed &operator=(const Fixed &obj); // assignment operator

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif