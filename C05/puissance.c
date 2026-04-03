/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:52:41 by louisblanka       #+#    #+#             */
/*   Updated: 2026/04/03 16:57:23 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	return nb * ft_power(nb, power - 1);
}

int main(void)
{
	printf("%d\n", ft_power(3, 3));
	return 0;
}