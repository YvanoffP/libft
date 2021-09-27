#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	pos;

	pos = ft_strlen(s);
	if (pos > 0)
	{
		while (s[pos] != (char)c && pos > 0)
			pos--;
		if (s[pos] == (char)c)
			return (s[pos]);
		return (NULL);
	}
}
