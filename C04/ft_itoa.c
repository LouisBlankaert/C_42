/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 23:41:32 by louisblanka       #+#    #+#             */
/*   Updated: 2026/04/03 14:24:35 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	long	nb;        // on met dans un long pour gérer INT_MIN
	int		count;     // nombre de caractères nécessaires
	char	*tab;      // la string finale
	int		i;

	nb = n;
	count = 0;

	// si nb <= 0 → il faut au moins 1 case :
	// soit pour '0', soit pour le '-'
	if (nb <= 0)
		count++;

	// on copie nb pour compter sans le modifier
	long tmp = nb;

	// on compte le nombre de chiffres
	while (tmp != 0)
	{
		tmp /= 10;   // enlève un chiffre
		count++;
	}

	// allocation mémoire (+1 pour le '\0')
	tab = malloc((count + 1) * sizeof(*tab));
	if (!tab)
		return (NULL);

	tab[count] = '\0'; // fin de string

	// si négatif → on met '-' au début
	if (nb < 0)
	{
		tab[0] = '-';
		nb = -nb; // on travaille en positif ensuite
	}

	// cas spécial : 0
	if (nb == 0)
		tab[0] = '0';

	// on remplit depuis la fin
	i = count - 1;
	while (nb > 0)
	{
		tab[i] = (nb % 10) + '0'; // dernier chiffre
		nb /= 10;                // on enlève ce chiffre
		i--;                     // on recule
	}

	return (tab);
}