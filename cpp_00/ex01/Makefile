# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 15:45:24 by aleperei          #+#    #+#              #
#    Updated: 2024/04/03 17:23:51 by aleperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Phonebook.cpp \
		Contact.cpp \
		main.cpp

RM = rm -f

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $< 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

