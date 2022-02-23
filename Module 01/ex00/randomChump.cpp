/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 16:53:44 by atahiri           #+#    #+#             */
/*   Updated: 2022/02/23 08:43:59 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Class obj(name) it creates an object in stack */

/*
	In C++, memory is allocated to variables on a stack or on a heap.
	Allocated on the stack, the variable persists until the end of the block
	in which it's defined. Allocated on the heap,
	the memory containing the object persists until the end of your program,
	or until you delete the object.
*/

void randomChump(std::string name)
{
	Zombie stack(name);
	stack.announce();
}
