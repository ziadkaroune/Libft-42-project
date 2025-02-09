/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:27:11 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/06 20:27:14 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)(str + i));
	}
	return (0);
}

/*
		#include <stdio.h>
		int main(){
			char *srr = "haaaaaaal@ao";
			char *result = ft_strchr(srr , 'a');
			printf("%s\n" , result);
			return (0);

		}
*/
