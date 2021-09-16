NAME := libft.a

OBJS := $(NAMES:.c=.o)

MAIN := main.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADERS_DIR = includes

NAMES := \
		ft_memset.c \
		ft_putchar.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c

all: ${NAME}

${NAME}: $(OBJS)
		ar rcs $(NAME) $(OBJS)

$(OBJS): %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(NAMES)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

re: fclean all
.PHONY: all clean fclean re
