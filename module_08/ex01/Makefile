# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 17:08:05 by jbaringo          #+#    #+#              #
#    Updated: 2021/11/16 12:16:20 by jbaringo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = container
CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98

FILES = main.cpp Span.cpp

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
