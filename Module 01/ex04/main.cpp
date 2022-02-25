/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:47:17 by atahiri           #+#    #+#             */
/*   Updated: 2022/02/25 13:05:52 by atahiri          ###   ########.fr       */
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
		std::ifstream inFile(filename);
		if (inFile)
		{
			std::string line;
			std::ofstream outFile;
			outFile.open(filename + ".replace");
			if (outFile.good())
			{
				while (std::getline(inFile, line))
				{
					int i = 0;
					while (line.find(s1, i) != std::string::npos) // npos until the end of the string
					{
						line = std::string(line.substr(0, line.find(s1))) + s2 + std::string(line.substr(line.find(s1) + s1.length(), line.length() - 1));
						i++;
					}
					outFile << line << std::endl;
				}
				inFile.close();
			}
			outFile.close();
		}
		else
			std::cout << "Can't open the file " << filename + ".replace" << std::endl;
	}
	return (0);
}