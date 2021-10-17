NAME = fragtrap
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)
SRCS = srcs/main.cpp srcs/class/ClapTrap.cpp srcs/class/ScavTrap.cpp srcs/class/FragTrap.cpp

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
