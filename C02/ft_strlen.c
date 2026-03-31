/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:48:54 by louisblanka       #+#    #+#             */
/*   Updated: 2026/03/31 14:55:37 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}
// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "Hello";
// 	printf("%d\n", ft_strlen(str));
// 	return 0;
// }