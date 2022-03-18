/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:15:15 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/18 08:21:01 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
void easyfind(T con, int occur)
{
    if (std::find(con.begin(), con.end(), occur) != con.end())
        std::cout << "occurrence found" << std::endl;
    else
        std::cout << "occurrence not found" << std::endl;
}

#endif