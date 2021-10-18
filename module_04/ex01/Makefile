NAME = animal
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)
SRCS = srcs/main.cpp srcs/class/Animal.cpp srcs/class/Dog.cpp srcs/class/Cat.cpp srcs/class/Brain.cpp 

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
