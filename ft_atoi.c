#include "libft.h"

int	ft_iswspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\r' ||
			c == '\f' || c == '\v' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{

}
