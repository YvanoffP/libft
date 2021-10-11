/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:12:55 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/10/11 17:39:12 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t n)
{	
	unsigned int	count;

	count = 0;
	while ((*(s1 + count) != '\0' || *(s2 + count) != '\0') && count < n)
	{
		if (! (*(s1 + count) == *(s2 + count)))
			return (*(s1 + count) - *(s2 + count));
		count++;
	}
	return (0);
}
