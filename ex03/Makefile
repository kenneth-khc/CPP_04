# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 12:49:22 by kecheong          #+#    #+#              #
#    Updated: 2024/10/13 03:16:05 by kecheong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := tests

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -pedantic -g3

srcs := main.cpp AMateria.cpp Ice.cpp Cure.cpp MateriaSource.cpp Character.cpp
objs := $(addprefix obj/, $(srcs:.cpp=.o))

all: $(NAME)

$(NAME): $(objs)
	$(CXX) $(CXXFLAGS) -I include/ $(objs) -o $(NAME)

obj/%.o: src/%.cpp | obj
	$(CXX) $(CXXFLAGS) -I include/ $< -c -o $@

obj:
	@mkdir -p obj/

.PHONY: clean
clean:
	$(RM) -r obj/

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

.PHONY: fsan
fsan: CXXFLAGS += -fsanitize=address -g3
fsan: $(NAME)
