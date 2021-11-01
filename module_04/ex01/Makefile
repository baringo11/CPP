# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 18:13:21 by jbaringo          #+#    #+#              #
#    Updated: 2021/11/01 18:16:27 by jbaringo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98

FILES = srcs/main.cpp srcs/class/Animal.cpp srcs/class/Dog.cpp srcs/class/Cat.cpp srcs/class/Brain.cpp 

OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/,$(FILES:.cpp=.o))

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) -o $@ $(OBJ)

clean :
	rm -f *.o
	rm -rf obj

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
