/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:56:36 by zkaroune          #+#    #+#             */
/*   Updated: 2024/03/06 19:56:45 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	j;

	j = 0;
	while (n-- > 0)
	{
		((unsigned char *)s)[j] = (unsigned char)c;
		j++;
	}
	return (s);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <string.h>
int main(){
    char str[10] = "ziada";
    char *result = ft_memset(str , 'c' ,3); 
    printf("%s\n" , result); 
    
     char *result2 = memset(str , 'c' ,3); 
    printf("%s\n" , result2); 
    return 0;
}
*/
