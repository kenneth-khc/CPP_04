# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 12:49:22 by kecheong          #+#    #+#              #
#    Updated: 2024/10/02 16:45:33 by kecheong         ###   ########.fr        #
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

clean:
	$(RM) $(objs)

fclean: clean
	$(RM) $(NAME)

re: fclean all

fsan: CXXFLAGS += -fsanitize=address -g3
fsan: $(NAME)
