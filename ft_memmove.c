/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:25:14 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/06 20:25:17 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	j;

	j = 0;
	if (dst == src)
	{
		return (dst);
	}
	if ((unsigned char *)dst > (unsigned char *)src)
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		while (j < len)
		{
			((unsigned char *)dst)[j] = ((unsigned char *)src)[j];
			j++;
		}
	}
	return (dst);
}
