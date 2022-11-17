/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:52:37 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/19 19:58:47 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_atoi_base(char *nbr, char *base_from);
int	ft_base_check(char *base);

int	ft_nbrlen(int nbr, char *base_to)
{
	unsigned int	baselen;
	int				nbrlen;
	unsigned int	nb;

	nbrlen = 1;
	baselen = 0;
	while (base_to[baselen])
		baselen++;
	if (nbr < 0)
	{
		nb = -nbr;
		nbrlen++;
	}
	else
		nb = nbr;
	while (nb >= baselen)
	{
		nb = nb / baselen;
		nbrlen++;
	}
	return (nbrlen);
}

char	*ft_putnbr_base(int nbr, int nbrlen, char *base_to, char *conv)
{
	unsigned int	baselen;
	unsigned int	nb;
	int				i;

	baselen = 0;
	i = 0;
	while (base_to[baselen])
		baselen++;
	if (nbr < 0)
	{
		conv[0] = '-';
		nb = -nbr;
	}
	else
		nb = nbr;
	if (nb == 0)
		conv[0] = base_to[0];
	while (nb >= 1)
	{
		conv[nbrlen - i - 1] = base_to[nb % baselen];
		nb = nb / baselen;
		i++;
	}
	return (conv);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		nblen;
	char	*conv;

	if (ft_base_check(base_from) < 2 || ft_base_check(base_to) < 2)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	nblen = ft_nbrlen(nb, base_to);
	conv = (char *)malloc(sizeof(char) * (nblen + 1));
	if (!conv)
		return (0);
	conv[0] = '\0';
	conv = ft_putnbr_base(nb, nblen, base_to, conv);
	conv[nblen] = '\0';
	return (conv);
}

int	main(int argc, char **argv)
{
	printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}

