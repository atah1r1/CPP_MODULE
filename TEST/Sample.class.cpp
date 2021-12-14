/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:35:06 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/14 17:43:18 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"


Sample::Sample(void) {
	std::cout << "constructor called" << std::endl;
}

Sample::~Sample(void) {
	std::cout << "destructor called" << std::endl;
}