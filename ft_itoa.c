/* ************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:44:59 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/14 12:55:27 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdt.h"

int ft_nbrlen(int *nbr, int	*isneg)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		*nbr *= -1;
		count++;
		*isneg = 1;
	}
	while (nbr >= 1)
	{
		*nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int	n)
{
	int	isneg;
	int	len;
	char	*nb;

	nb = 0;
	isneg = 0;
	len = ft_nbrlen(&n, &isneg);
	if (n != 0)
		nb = malloc(sizeof(char) * (len + 1));
	else
		return (nb = ft_strdup("0");
	nb[len] = '\0';
	while (--len >= 1)
	{
		nb[len] = (n % 10) + '0';
		n /= 10;
	}
	if (isneg == 1)
		nb[0] = '-';
	else
		nb[0] = (n % 10) + '0';
	return (nb);
}
