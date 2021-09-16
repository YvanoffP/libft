#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

size_t  ft_strlen(char *s);
size_t  ft_strlcpy(char *dst, char *src, size_t size);
void    ft_bzero(void *s, size_t n);
void    *ft_memset(void *s, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);

int     isdigit(int c);
int     isalpha(int c);
#endif
