/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:24:31 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/06 20:24:33 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countdigits(int c)
{
	size_t	j;

	j = 0;
	if (c == 0)
		j = 1;
	else
	{
		while (c)
		{
			c /= 10;
			j++;
		}
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char		*tableaux;
	long int	numb;
	size_t		totaldgt;

	numb = n;
	totaldgt = countdigits(n);
	if (n < 0)
	{
		numb *= -1;
		totaldgt++;
	}
	tableaux = (char *)malloc(sizeof(char) * (totaldgt + 1));
	if (!tableaux)
		return (NULL);
	*(tableaux + totaldgt) = 0;
	while (totaldgt--)
	{
		*(tableaux + totaldgt) = numb % 10 + '0';
		numb = numb / 10;
	}
	if (n < 0)
		*(tableaux + 0) = '-';
	return (tableaux);
}
