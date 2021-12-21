# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 10:35:39 by atahiri           #+#    #+#              #
#    Updated: 2021/12/21 22:00:52 by atahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CFLAGS = -Wall -Werror -Wextra

CC = clang++

SRCS = Contact.class.cpp main.cpp PhoneBook.class.cpp

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