/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 22:10:27 by louisblanka       #+#    #+#             */
/*   Updated: 2026/03/31 23:10:05 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return dest;
}
// #include <stdio.h>

// int main(void)
// {
// 	char dest[] = "salut";
// 	char src[] = "Louis";
// 	printf("%s\n", ft_strcat(dest, src));
// 	return 0;
// }