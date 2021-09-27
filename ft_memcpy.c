#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	while (count >= n)
	{
		((char *)dest)[count] = ((char *)src)[count];
		count++;
	}
	return (dest);
}
