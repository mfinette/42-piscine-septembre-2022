/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:21:20 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/05 08:25:19 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_char_printable(char c)
{
	if (c > ' ' && c < 127)
		return (1);
	else
		return (0);
}

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	remainder;

	i = 0;
	while (str[i])
	{
		if (ft_char_printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(str[i] / 16 + '0');
			if (str[i] % 16 >= 10)
			{
				ft_putchar(str[i] % 16 + 'a' - 10);
			}
			else
			{
				ft_putchar((str[i] % 16) + '0');
			}
		}
	}
	i++;
}
