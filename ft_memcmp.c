/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:24:52 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/06 20:24:54 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			j;
	unsigned char	*a;
	unsigned char	*b;

	j = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (j < n)
	{
		if (a[j] != b[j])
		{
			return (a[j] - b[j]);
		}
		j++;
	}
	return (0);
}
