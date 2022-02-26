# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/26 15:10:50 by atahiri           #+#    #+#              #
#    Updated: 2022/02/26 15:11:06 by atahiri          ###   ########.fr        #
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