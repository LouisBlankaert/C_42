/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 22:17:55 by louisblanka       #+#    #+#             */
/*   Updated: 2026/04/02 23:41:28 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

int 	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return 0;
		j  = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

void	ft_putnbr_base(long nbr, char *base)
{
	int base_len;
	char c;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return;
	if (!check_base(base))
		return;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
	}
	c = base[nbr % base_len];
	write(1, &c, 1);
}

int main(void)
{
	ft_putnbr_base(20, "01234567");
}