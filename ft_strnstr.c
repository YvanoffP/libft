#include "ftlib.h"

char	*strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	count;
	size_t	offset;

	count = 0;
	offset = 0;
	if (*s2 == 0)
		return (s1);
	while (s1[count] != '\0' && count < n)
	{
		offset = 0;
		while (s1[count + offset] == s2[offset] && s2[offset] != '\0' && count + offset < n)
			offset++;
		if (offset == ft_strlen(s2))
			return (s1[count]);
		count++;
	}
	return (NULL);
}
