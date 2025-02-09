/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:29:40 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/06 20:29:41 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	size_t	j;

	j = ft_strlen(str);
	while (j > 0)
	{
		if (str[j] == (char)c)
		{
			return ((char *)(str + j));
		}
		j--;
	}
	if (str[j] == (char)c)
	{
		return ((char *)(str + j));
	}
	if (c == '\0')
	{
		return ((char *)(str + j));
	}
	return (NULL);
}
