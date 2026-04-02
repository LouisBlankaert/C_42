/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 16:57:09 by louisblanka       #+#    #+#             */
/*   Updated: 2026/04/02 17:55:06 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return i;
}

int     ft_strlcpy(char *dest, char *src, int size)
{
	int len;
	int i;
	
	len = ft_strlen(src);
	if (size == 0)
		return len;
	i = 0;
	while(src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return len;
}
#include <stdio.h>
int main(void)
{
    char dest[10];
    int len;
    len = ft_strlcpy(dest, "Hello Louis", 3);
    printf("%d\n", len);// affiche le résultat
	printf("%s\n", dest);
    return 0;
}