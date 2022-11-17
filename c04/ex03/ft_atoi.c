/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:45:44 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/07 14:04:39 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_minus(char c)
{
	if (c == '-')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus_count;
	int	result;

	i = 0;
	minus_count = 0;
	result = 0;
	while (str[i] && (str[i] == (' ') || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (is_minus(str[i]))
			minus_count++;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10;
		result += (str[i] - '0');
		i++;
	}
	if (minus_count % 2)
		result = -1 * result;
	return (result);
}
