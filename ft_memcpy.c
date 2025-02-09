/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:25:03 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/06 20:25:07 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	j;

	j = 0;
	if (src == 0 && dest == 0)
	{
		return (NULL);
	}
	while (j < n)
	{
		((unsigned char *)dest)[j] = ((unsigned char *)src)[j];
		j++;
	}
	return (dest);
}
