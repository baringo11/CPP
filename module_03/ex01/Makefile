# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 18:03:15 by jbaringo          #+#    #+#              #
#    Updated: 2021/11/01 18:06:02 by jbaringo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap
CXX = clang++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98

FILES = srcs/main.cpp srcs/class/ClapTrap.cpp srcs/class/ScavTrap.cpp

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
