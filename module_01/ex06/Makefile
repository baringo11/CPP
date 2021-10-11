NAME = karenFilter
CC = clang++
FLAGS = -c -Wall -Wextra -Werror
OBJS = $(SRCS:.cpp=.o)
SRCS = srcs/main.cpp srcs/class/Karen.cpp

$(NAME): $(SRCS) $(OBJS)
		#$(CC) $(FLAGS) $(SRCS)
		$(CC) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
