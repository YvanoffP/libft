#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		index;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char) * ft_strlen((char *)s));
	if (!result)
		return (NULL);
	index = 0;
	while (s[i])
	{
		result[index] = f(index, s[index]);
		index++;
	}
	return (result);
}
