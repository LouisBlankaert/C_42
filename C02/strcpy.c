/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:57:54 by louisblanka       #+#    #+#             */
/*   Updated: 2026/03/31 17:38:52 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main (int argc, char **argv)
{
	char dest[20];

	if (argc != 2)
	{
		printf("Que 1 arguments possible");
		return 1;
	}
	printf("%s\n", ft_strcpy(dest, argv[1]));
	return 0;
}