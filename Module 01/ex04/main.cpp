/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:47:17 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/28 15:58:26 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::string filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
	{
		std::cout << "Error in arguments" << std::endl;
	}
	else
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		if (filename.empty() || s1.empty() || s2.empty()) {
			std::cout << "You entered an empty string" << std::endl;
			return 0;
		}
		std::cout << "Mli7a" << std::endl;
	}
}