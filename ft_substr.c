/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:24:00 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/10/11 20:24:26 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	count;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char) * len);
	if (!res)
		return (NULL);
	count = 0;
	while (count < len)
	{
		res[count] = s[start];
		start++;
		count++;
	}
	return (res);
}
