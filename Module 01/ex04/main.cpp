/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:47:17 by atahiri           #+#    #+#             */
/*   Updated: 2022/02/23 09:22:37 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

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
		if (filename.empty() || s1.empty() || s2.empty())
		{
			std::cout << "You entered an empty string" << std::endl;
			return 0;
		}

		
		std::fstream file(filename, std::ios::in);

		if (!file.is_open())
			return (0);

		size_t pos;
		std::string line;
		std::string buf;
		while (getline(file, line))
		{
			if ((pos = line.find(s1, 0)) != std::string::npos) // if not found == nops max size_t
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
			}
			buf.append(line);
			if (!file.eof())
				buf.append("\n");
		}
		file.close();
		file.open(argv[1], std::ios::out | std::ios::trunc);
		file << buf;
		file.close();
	}
	return (0);
}