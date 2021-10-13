#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		index;

	index = 0;
	if (s && f)
		while (s[i])
		{
			f(index, s[index]);
			index++;
		}
}
