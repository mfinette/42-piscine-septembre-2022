/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:20:16 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/15 18:21:22 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

void	ft_putnbr_rec(int nb, int neg, char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nb > (base_len - 1) || nb < -(base_len - 1))
		ft_putnbr_rec(nb / base_len, neg, base);
	if (neg)
		ft_putchar(base[(nb % base_len) * -1]);
	else
		ft_putchar(base[(nb % base_len)]);
}

int	ft_is_base_valid(char *base)
{
	int		i;
	int		len;
	char	c;

	len = 0;
	while (*base)
	{
		if (*base == '+' || *base == '-' || ft_isspace(*base))
			return (0);
		i = 1;
		c = *base;
		while (base[i])
		{
			if (c == base[i])
				return (0);
			i++;
		}
		base++;
		len++;
	}
	if (len <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	if (!ft_is_base_valid(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr_rec(nb, 1, base);
	}
	else
		ft_putnbr_rec(nb, 0, base);
}
