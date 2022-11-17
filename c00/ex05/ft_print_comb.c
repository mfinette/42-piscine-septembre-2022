/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:53:57 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/01 18:02:36 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ecrire(int i2, int j2, int k2)
{
	char	chr;

	chr = i2 + 48;
	write(1, &chr, 1);
	chr = j2 + 48;
	write(1, &chr, 1);
	chr = k2 + 48;
	write(1, &chr, 1);
	if (i2 != 7 || j2 != 8 || k2 != 9)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i1;
	int	j1;
	int	k1;

	i1 = 0;
	while (i1 < 10)
	{
		j1 = i1 + 1;
		while (j1 < 10)
		{
			k1 = j1 + 1;
			while (k1 < 10)
			{
				ft_ecrire(i1, j1, k1);
				k1++;
			}
			j1++;
		}
		i1++;
	}
}
