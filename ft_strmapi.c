/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:14:19 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/10/15 03:24:00 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	index;

	if (!(ft_strncmp(s, "", 1)))
		return (ft_strdup(""));
	if (!s)
		return (NULL);
	if (!f)
		return (ft_strdup(s));
	result = malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!result)
		return (NULL);
	index = 0;
	while (s[index])
	{
		result[index] = (*f)(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return (result);
}
