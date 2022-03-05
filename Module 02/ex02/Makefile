# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 12:18:16 by atahiri           #+#    #+#              #
#    Updated: 2022/03/05 12:18:18 by atahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	fixed
CC		= 	c++
FLAGS	= 	-Wall -Wextra -Werror -std=c++98
SRCS	= 	main.cpp Fixed.cpp


$(NAME) : 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf $(NAME)

re		: 	fclean all