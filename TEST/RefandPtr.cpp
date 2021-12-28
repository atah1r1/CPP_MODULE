/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RefandPtr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:59:07 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/28 15:03:46 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void PassByPtr(std::string *str)
{
	*str += " and watching it";
}

void PassByRef(std::string &str)
{
	str += " and watching it";
}

int main()
{
	std::string str = "I like football";
	std::cout << str << std::endl;

	PassByPtr(&str);
	std::cout << str << std::endl;

	str = "I like BasketBall";
	std::cout << str << std::endl;

	PassByRef(str);
	std::cout << str << std::endl;
	

	return 0;
}