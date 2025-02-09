/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:11:33 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/06 20:11:35 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	debut;
	size_t	fin;
	char	*dup;

	debut = 0;
	fin = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[debut] && ft_strchr(set, s1[debut]))
		debut++;
	if (debut == fin)
		return (ft_strdup(""));
	while (s1[fin - 1] && ft_strchr(set, s1[fin - 1]))
		fin--;
	dup = (char *)malloc(sizeof(char) * (fin - debut + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1 + debut, (fin - debut + 1));
	return (dup);
}
/*
#include <stdio.h>
int main()
{

char *dup = ft_strtrim("@@hello world@@" , "@@");
printf("%s" , dup );
return 0;
}
*/
