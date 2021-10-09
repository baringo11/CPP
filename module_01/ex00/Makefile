NAME = zombies
CC = clang++
FLAGS = -c -Wall -Wextra -Werror
OBJS = $(SRCS:.cpp=.o)
SRCS = srcs/main.cpp srcs/class/Zombie.cpp srcs/newZombie.cpp srcs/randomChump.cpp

$(NAME): $(SRCS) $(OBJS)
		#$(CC) $(FLAGS) $(SRCS)
		$(CC) -o $(NAME) $(OBJS) #-g3 -fsanitize=address

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
