# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 13:37:57 by atahiri           #+#    #+#              #
#    Updated: 2021/12/28 13:38:35 by atahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	weapon
CC		= 	clang++
FLAGS	= 	-Wall -Wextra -Werror -std=c++98
SRCS	= 	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp


$(NAME) : 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf $(NAME)

re		: 	fclean all