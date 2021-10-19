NAME = materia
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)
SRCS = srcs/main.cpp srcs/class/AMateria.cpp srcs/class/Ice.cpp srcs/class/Cure.cpp srcs/class/Character.cpp srcs/class/MateriaSource.cpp

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

$(NAME): $(OBJS)
		$(CXX) -o $@ $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
