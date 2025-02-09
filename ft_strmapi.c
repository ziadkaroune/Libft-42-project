/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:29:06 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/06 20:29:07 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*allc;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	allc = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!s || !allc)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		allc[i] = f(i, s[i]);
		i++;
	}
	allc[i] = '\0';
	return (allc);
}
