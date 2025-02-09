/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <zkaroune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:05:12 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/11 15:45:33 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nmots(char const *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (str[i] == c)
			j++;
		i++;
	}
	return (j);
}

static void	ft_freem(char **alloc, size_t nb)
{
	while (nb > 0)
	{
		free(alloc[nb - 1]);
		nb--;
	}
	free(alloc);
}

static size_t	compt(const char *str, char c)
{
	size_t	compteur;

	if (!ft_strchr(str, c))
		compteur = ft_strlen(str);
	else
		compteur = ft_strchr(str, c) - str;
	return (compteur);
}

static void	fill_substrings(char **tranch, const char *s, char c)
{
	size_t	idx;
	size_t	compteur;

	idx = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			compteur = compt(s, c);
			tranch[idx] = ft_substr(s, 0, compteur);
			if (!tranch[idx])
			{
				ft_freem(tranch, idx);
			}
			idx++;
			s += compteur;
		}
	}
	tranch[idx] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tranch;

	tranch = (char **)malloc(sizeof(char *) * (nmots(s, c) + 1));
	if (!s || !tranch)
		return (NULL);
	fill_substrings(tranch, s, c);
	return (tranch);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	**result;
	int		i;

	str = "a b c d ks ksn";
	result = ft_split(str, ' ');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
