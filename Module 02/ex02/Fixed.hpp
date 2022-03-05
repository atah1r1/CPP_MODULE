/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:01:16 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/05 14:43:31 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixed_number;
    static const int fractional;

public:
    Fixed(void);
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    Fixed(const int nb);
    Fixed(const float nb);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    // Comparaison operators
    bool operator>(const Fixed &a) const;
    bool operator<(const Fixed &a) const;
    bool operator>=(const Fixed &a) const;
    bool operator<=(const Fixed &a) const;
    bool operator==(const Fixed &a) const;
    bool operator!=(const Fixed &a) const;

    // Arithmetic operators
    Fixed operator+(const Fixed &a) const ;
    Fixed operator-(const Fixed &a) const ;
    Fixed operator*(const Fixed &a) const ;
    Fixed operator/(const Fixed &a) const ;

    // pre and post increment and decrement

    Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

    // oveloaded member functions
    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &cout, const Fixed &obj);

#endif