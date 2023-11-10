NAME = push_swap

FLAGS = cc -Wall -Wextra -Werror

FILES = push_swap.c \
			rules1.c \
			rules2.c \
			utils.c \
			utils2.c \
			utils3.c \
			utils4.c \

OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(FLAGS) $(FILES) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re