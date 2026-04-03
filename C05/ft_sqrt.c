/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 17:09:01 by louisblanka       #+#    #+#             */
/*   Updated: 2026/04/03 17:49:39 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt_rec(int nb, int i)
{
	if (i * i == nb)
		return i;
	if (i * i > nb)
		return 0;
	return ft_sqrt_rec(nb, i + 1);
}
int	ft_sqrt(int nb)
{
	if (nb < 0)
		return 0;
	return ft_sqrt_rec(nb,	1);
}

int main(void)
{
	printf("%d\n", ft_sqrt(25));
	return 0;
}