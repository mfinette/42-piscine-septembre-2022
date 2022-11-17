/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:23:07 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/01 15:41:27 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{	
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			write (1, " ", 1);
			ft_putchar (j / 10 + '0');
			ft_putchar (j % 10 + '0');
			if (i != 98)
			{
				write(1, ", ", 2);
			}	
			j ++;
		}
		i ++;
	}
}
