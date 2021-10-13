/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:11:10 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/10/14 00:32:49 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	pos;

	pos = ft_strlen(s);
	if (s[0] == '\0')
		return ((char *)s);
	if (pos > 0)
	{
		while (s[pos] != (char)c && pos > 0)
			pos--;
		if (s[pos] == (char)c)
			return ((char *)(s + pos));
	}
	return (NULL);
}
