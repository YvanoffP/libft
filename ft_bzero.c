#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	count;

	count = 0;
	while (count <= n)
	{
		s[count] = '\0';
		count++;
	}
	return (s);
}
