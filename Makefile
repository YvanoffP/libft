NAME := libft.a
SRCS_DIR := src
OBJS := $(addprefix $(SRCS_DIR)/,$(NAMES))

NAMES := \
ft_memset.o \
ft_putchar.o \
ft_bzero.o \
ft_memcpy.o \
ft_memccpy.o \
ft_memmove.o \
ft_memchr.o \
ft_memcmp.o \
ft_strlen.o \
ft_strlcpy.o \
ft_strlcat.o \
ft_strchr.o \
ft_strrchr.o \
ft_strnstr.o \
ft_strncmp.o \
ft_atoi.o \
ft_isalpha.o \
ft_isdigit.o \
ft_isalnum.o \
ft_isascii.o \
ft_isprint.o \
ft_toupper.o \
ft_tolower.o

HEADERS_DIR = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(HEADERS_DIR)

all: ${NAME}

${NAME}: $(OBJS)
		ar rcs $(NAME) $(OBJS)

$(OBJS): %.o: %.c
		$(CC) -c $(CFLAGS) $< -o $@

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re
