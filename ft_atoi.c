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
	int	res;
	int	neg;
	int	count;

	res = 0;
	neg = 1;
	count = 0;
	while (ft_iswspace(str[count]))
		count++;
	if (str[count] == '-')
	{
		neg = -1;
		count++;
	}
	else if (str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		res = (res * 10) + (str[count] - '0';
		count++;
	}
}
