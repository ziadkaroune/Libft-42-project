/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:27:59 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/06 20:28:01 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	i;
	char	*unions;

	if (!s1 && !s2)
		return (NULL);
	unions = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	j = 0;
	if (!unions)
		return (NULL);
	while (j < ft_strlen(s1))
	{
		unions[j] = s1[j];
		j++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		unions[j + i] = s2[i];
		i++;
	}
	unions[i + j] = '\0';
	return (unions);
}
