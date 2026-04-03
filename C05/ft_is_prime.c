/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 18:18:31 by louisblanka       #+#    #+#             */
/*   Updated: 2026/04/03 19:11:38 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime_rec(int nb, int i)
{
	if (i * i > nb)
		return 1;
	if (nb % i == 0)
		return 0;
	return ft_is_prime_rec(nb, i + 1);
}

int ft_is_prime(int nb) 
{
	if (nb <= 1)
		return 0;
	return ft_is_prime_rec(nb,	2);
}

int main(void) 
{
	printf("%d\n", ft_is_prime(4));
	return 0;
}