/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:11:10 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/10/11 17:12:15 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			return ((char *)(s + pos));
	}
	return (NULL);
}
