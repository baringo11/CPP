NAME = brain
CC = clang++
FLAGS = -c -Wall -Wextra -Werror
OBJS = $(SRCS:.cpp=.o)
SRCS = main.cpp

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
