/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:30:50 by louisblanka       #+#    #+#             */
/*   Updated: 2026/03/30 21:26:36 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			ft_putnbr(i);
			ft_putnbr(j);
			if (!(i == 8 && j == 9))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_comb();
	return 0;
}