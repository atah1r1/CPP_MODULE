/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:11:48 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/01 22:56:49 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fixed_number;
    static const int fractional;

public:
    Fixed(void);
    ~Fixed();
    Fixed(const Fixed &obj); // copy constructor
    Fixed &operator=(const Fixed &obj); // assignment operator

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif