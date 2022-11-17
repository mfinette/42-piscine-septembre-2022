/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:16:34 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/15 18:18:13 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_charstr(char *str, char to_find)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (to_find == *str)
			return (i);
		str++;
		i++;
	}
	return (-1);
}

int	ft_get_str_sign(char *str)
{
	int	sign;

	sign = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	return (!(sign % 2) * 2 - 1);
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

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign_coef;
	int	base_len;
	int	i;

	if (!ft_is_base_valid(base))
		return (0);
	base_len = 0;
	while (base[base_len])
		base_len++;
	sign_coef = ft_get_str_sign(str);
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
		str++;
	res = 0;
	i = -1;
	while (ft_charstr(base, str[++i]) != -1)
	{
		res *= base_len;
		res += ft_charstr(base, str[i]);
	}
	return (res * sign_coef);
}
