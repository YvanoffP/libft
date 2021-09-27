#include "libft.h"

char	*ft_strdup(const char	*src)
{
	int		size;
	char	*str;
	char	*res;

	size = ft_strlen((char *)src);
    str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return ((void *) 0);
	res = str;
	while (*src != '\0')
	{
		*str = *src;
		++str;
		++src;
	}
	*str = '\0';
	return (res);
}
