/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:54:59 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/15 20:58:58 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T a[], int length, void (*func)(T const &))
{
    for (int i = 0; i < length; i++)
        func(a[i]);
}

template <typename T>
void test(T const &x)
{
    std::cout << "data: " << x << std::endl;
}

#endif