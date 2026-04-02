/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 17:57:51 by louisblanka       #+#    #+#             */
/*   Updated: 2026/04/02 18:14:47 by louisblanka      ###   ########.fr       */
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

int     ft_strlcat(char *dest, char *src, int size)
{
	int i;
	int j;
	int lenSrc;
	int lenDest;

	lenSrc = ft_strlen(src);
	lenDest = ft_strlen(dest);
	if (size <= lenDest)
		return (size + lenSrc);
	i = lenDest;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (lenSrc + lenDest);
}