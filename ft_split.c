/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:40:05 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/10/12 18:19:19 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size_wrd(const char *str, char *charset);
static int		ft_wrd_count(const char *str, char *charset);
int				ft_in_str(char c, const char *base);

static int	ft_size_wrd(const char	*str, char	*charset)
{
	int	count;

	count = 0;
	while (str[count] && ft_in_str(str[count], charset) == -1)
		count++;
	return (count);
}

int	ft_in_str(char c, const char *base)
{
	int	offset;

	offset = 0;
	while (*(base + offset))
		if (c == *(base + offset++))
			return (offset - 1);
	return (-1);
}

static int	ft_wrd_count(const char *str, char *charset)
{
	int	size;
	int	nb_words;

	nb_words = 0;
	while (*str)
	{
		while (*str && ft_in_str(*str, charset) != -1)
			str++;
		size = ft_size_wrd(str, charset);
		if (size)
		{
			nb_words++;
			str += size;
		}
	}
	return (nb_words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		count;
	char	*wrd;
	char	**tab;

	i = 0;
	count = 0;
	tab = malloc((ft_wrd_count(s, &c) + 1) * sizeof(char *));
	while (*(s + count))
	{
		while (*(s + count) && *(s + count) == c)
			count++;
		j = 0;
		if (ft_size_wrd(s + count, &c))
		{
			wrd = malloc((ft_size_wrd(s + count, &c) + 1) * sizeof(char));
			while (*(s + count) && *(s + count) != c)
				wrd[j++] = *(s + count++);
			wrd[j] = '\0';
			tab[i++] = wrd;
		}
	}
	tab[i] = (void *)0;
	return (tab);
}
