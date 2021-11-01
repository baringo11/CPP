# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 18:14:23 by jbaringo          #+#    #+#              #
#    Updated: 2021/11/01 18:16:32 by jbaringo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98

FILES = srcs/main.cpp srcs/class/AMateria.cpp srcs/class/Ice.cpp srcs/class/Cure.cpp srcs/class/Character.cpp srcs/class/MateriaSource.cpp

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
