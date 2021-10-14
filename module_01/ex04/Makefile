NAME = replace
CC = c++
FLAGS = -c -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)
SRCS = main.cpp

$(NAME): $(SRCS) $(OBJS)
		#$(CC) $(FLAGS) $(SRCS)
		$(CC) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

fcleanall:  fclean
			rm -f *.replace

re: fclean all

.PHONY: all clean fclean re
