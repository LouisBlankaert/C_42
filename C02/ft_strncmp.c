/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisblankaert <louisblankaert@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 20:44:24 by louisblanka       #+#    #+#             */
/*   Updated: 2026/03/31 20:53:12 by louisblanka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return 0;
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
	{
		i++;
	}
	return s1[i] - s2[i];
}