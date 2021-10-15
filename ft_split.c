/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:40:05 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/10/15 02:22:35 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_init
{
	int		i;
	int		j;
	int		count;
	char	*wrd;
	char	**tab;
}		t_init;

static int		ft_sz_w(const char *str, char charset);
static int		ft_wrd_count(const char *str, char charset);

static int	ft_sz_w(const char *str, char charset)
{
	int	count;

	count = 0;
	while (str[count] && str[count] != charset)
	{
		count++;
	}
	return (count);
}

static int	ft_wrd_count(const char *str, char charset)
{
	int	size;
	int	nb_words;
	int	count;

	count = 0;
	nb_words = 0;
	while (*(str + count))
	{
		while (*(str + count) && *(str + count) == charset)
			count++;
		size = ft_sz_w(str + count, charset);
		if (size)
		{
			nb_words++;
			count += size;
		}
	}
	return (nb_words);
}

char	**ft_split(char const *s, char c)
{
	struct s_init	vars;

	vars.i = 0;
	vars.count = 0;
	vars.tab = malloc((ft_wrd_count(s, c) + 1) * sizeof(char *));
	if (!vars.tab)
		return (NULL);
	while (*(s + vars.count))
	{
		while (*(s + vars.count) && *(s + vars.count) == c)
			vars.count++;
		vars.j = 0;
		if (ft_sz_w(s + vars.count, c))
		{
			vars.wrd = malloc((ft_sz_w(s + vars.count, c) + 1) * sizeof(char));
			if (!vars.wrd)
				return (NULL);
			while (*(s + vars.count) && *(s + vars.count) != c)
				vars.wrd[vars.j++] = *(s + vars.count++);
			vars.wrd[vars.j] = '\0';
			vars.tab[vars.i++] = vars.wrd;
		}
	}
	vars.tab[vars.i] = (void *)0;
	return (vars.tab);
}
