/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:48:53 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/22 02:40:05 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlude "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	index = 0;
	if (!s)
		return (NULL);
	while (s[index] != '\0')
	{
		write(fd, s[index], 1);
		index++;
	}
	write(fd, "\n", 1);
}
