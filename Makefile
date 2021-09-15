NAME := libft.a
SRCS_DIR := src
OBJS := $(addprefix $(SRCS_DIR)/,$(NAMES))
MAIN := main.c

NAMES := \
ft_memset.c \
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

HEADERS_DIR = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(HEADERS_DIR)

all: ${NAME}

$(MAIN): $(NAME)
		$(CC) $(CFLAGS) $@ -lft

${NAME}: $(OBJS)
		ar rcs $(NAME) $(OBJS)

$(OBJS): %.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re
