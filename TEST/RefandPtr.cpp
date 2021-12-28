/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RefandPtr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:59:07 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/28 15:07:32 by atahiri          ###   ########.fr       */
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
}

void PassByRef(std::string &str)
{
	str += " and watching it";
}

void PassByConstRef(std::string const &str)
{
	std::cout << str << std::endl;
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