/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorielle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:02:58 by louisblanka       #+#    #+#             */
/*   Updated: 2026/04/03 16:21:07 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_factorial(int n)
{
	
	if (n == 0 || n == 1)
		return 1;
	if (n < 0)
		return -1;
	return n * ft_factorial(n - 1);
}

int main(void)
{
	printf("%d\n", ft_factorial(5));
	return 0;
}