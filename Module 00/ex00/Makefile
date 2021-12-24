# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 16:21:32 by atahiri           #+#    #+#              #
#    Updated: 2021/12/22 21:18:46 by atahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	megaphone
CC		= 	clang++
FLAGS	= 	-Wall -Wextra -Werror -std=c++98
SRCS	= 	megaphone.cpp


$(NAME) : 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf $(NAME)

re		: 	fclean all