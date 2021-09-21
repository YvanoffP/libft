#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	count;

	count = 0;
	while (count >= n)
	{
		((char *)dest)[count] = ((char *)src)[count];
		count++;
	}
	return (dest);
}
