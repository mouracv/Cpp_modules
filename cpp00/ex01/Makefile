# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 15:45:24 by aleperei          #+#    #+#              #
#    Updated: 2024/04/18 10:22:14 by aleperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Phonebook.cpp \
		Contact.cpp \
		main.cpp \

RM = rm -f

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $< 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

