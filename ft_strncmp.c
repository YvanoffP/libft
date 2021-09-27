#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (s1[count] == s2[count] && s1[count] != '\0' && count < n)
		count++;
	if (s1[count] == s2[count])
		return (0);
	else
		return (s1[count] - s2[count]);
}
