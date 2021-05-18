/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:21:37 by atahiri           #+#    #+#             */
/*   Updated: 2021/05/18 16:48:21 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(int argc, char **argv) 
{
	if (argc > 1) 
	{
		for (int i = 1; i < argc; i += 1)
		{
			for (int j = 0; j < (int)strlen(argv[i]); j += 1)
			{
				std::cout << (char)toupper(argv[i][j]);
			}
		}
	}
	else 
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return 0;
}