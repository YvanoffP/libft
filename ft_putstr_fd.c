/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:48:53 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/22 02:40:05 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <nistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int index;

	index = 0;
	if (s)
		while (s[index] != '\0')
		{
			write(fd, &s[index], 1);
			index++;
		}
}u
