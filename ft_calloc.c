/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:26:07 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/10/11 19:26:43 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tozero;

	tozero = (void *)malloc(nmemb * size);
	if (!tozero)
		return (NULL);
	ft_bzero(tozero, nmemb);
	return (tozero);
}
