NAME = unnecessary_violence
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)
SRCS = srcs/main.cpp srcs/class/Weapon.cpp srcs/class/HumanA.cpp srcs/class/HumanB.cpp

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
