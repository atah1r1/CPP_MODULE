# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/13 12:39:02 by atahiri           #+#    #+#              #
#    Updated: 2022/03/15 10:28:56 by atahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	cast
CC		= 	c++
FLAGS	= 	-Wall -Wextra -Werror -std=c++98
SRCS	= 	main.cpp A.cpp B.cpp C.cpp Base.cpp


$(NAME) : 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf $(NAME)

re		: 	fclean all