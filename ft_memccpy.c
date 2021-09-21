#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		((char *)dest)[count] = ((char *)src)[count];
		count++;
		if (((char *)dest)[count - 1] == (char)c)
			return(&((unsigned char *)dest)[count]);
	}
	return(NULL);
}
