/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 17:40:01 by louisblanka       #+#    #+#             */
/*   Updated: 2026/03/31 18:29:01 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}
// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	char dest[50] = {0};
	
// 	if (argc != 2)
// 		return 1;
// 	printf("%s\n", ft_strncpy(dest, argv[1], 3));
// 	return 0;
// }