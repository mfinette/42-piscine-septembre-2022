/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:51:58 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/19 19:53:25 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_charerror(char *base_from)
{
	int	i;

	i = 0;
	while (base_from[i])
	{
		if (base_from[i] == '+' || base_from[i] == '-' || base_from[i] == ' '
			|| (base_from[i] >= 9 && base_from[i] <= 13))
			return (1);
		i++;
	}
	return (0);
}

int	ft_base_check(char *base_from)
{
	int	i;
	int	j;

	i = 0;
	while (base_from[i])
	{
		if (ft_charerror(base_from) == 1)
			return (-1);
		j = i + 1;
		while (base_from[j])
		{
			if (base_from[i] == base_from[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_basedec(char *base_from, char nb)
{
	int	x;

	x = 0;
	while (base_from[x] && base_from[x] != nb)
		x++;
	if (base_from[x] == '\0')
		return (-1);
	return (x);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	if (ft_base_check(base_from) < 2)
		return (-1);
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == ' ')
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign = -sign;
		i++;
	}
	res = 0;
	while (nbr[i] && ft_basedec(base_from, nbr[i]) != -1)
	{
		res = res * ft_base_check(base_from) + ft_basedec(base_from, nbr[i]);
		i++;
	}
	return (res * sign);
}
