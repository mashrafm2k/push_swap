NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes -I libft

SRCS = src/main.c \
       src/stack.c \
       src/free.c \
       src/utils.c \
       src/parse.c \
       src/index.c \
       src/operations_swap_push.c \
       src/operations_rotate.c \
       src/chunk_sort.c

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# ---------------------------- #

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

# ---------------------------- #

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFT_DIR)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all

# ---------------------------- #

.PHONY: all clean fclean re