NAME = a.out
CC = clang++
FLAGS = -c -Wall -Wextra -Werror
OBJS = $(SRCS:.cpp=.o)
SRCS = main.cpp Fixed.cpp

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
