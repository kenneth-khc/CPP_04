# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 12:49:22 by kecheong          #+#    #+#              #
#    Updated: 2024/10/12 23:59:47 by kecheong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := tests

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -pedantic

srcs := main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
objs := $(srcs:.cpp=.o)

.PHONY: all
all: $(NAME)

$(NAME): $(objs)
	$(CXX) $(CXXFLAGS) $(objs) -o $(NAME)

.PHONY: clean
clean:
	$(RM) $(objs)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

.PHONY: fsan
fsan: CXXFLAGS += -fsanitize=address -g3
fsan: $(NAME)
