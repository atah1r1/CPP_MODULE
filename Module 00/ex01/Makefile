# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 10:35:39 by atahiri           #+#    #+#              #
#    Updated: 2021/05/19 10:37:00 by atahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CFLAGS = -Wall -Werror -Wextra

CC = clang++

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

clean:
	@rm -rf $(OBJS)
	@echo "OBJECTS REMOVED !!"

fclean: clean
	@rm -rf $(NAME)
	@echo "Cleaning All !!"

re: fclean all