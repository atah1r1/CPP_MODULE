/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RefandPtr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:59:07 by atahiri           #+#    #+#             */
/*   Updated: 2022/02/26 10:10:33 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void PassByPtr(std::string *str)
{
	*str += " and watching it";
}

void PassByConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
	std::cout << str << std::endl; // print address
}

void PassByRef(std::string &str)
{
	str += " and watching it";
}

void PassByConstRef(std::string const &str)
{
	std::cout << str << std::endl;
	std::cout << &str << std::endl; // print address
}

int main()
{
	std::string str = "I like football";
	std::cout << str << std::endl;

	PassByPtr(&str);
	PassByConstPtr(&str);

	str = "I like BasketBall";
	std::cout << str << std::endl;

	PassByRef(str);
	PassByConstRef(str);

	return 0;
}