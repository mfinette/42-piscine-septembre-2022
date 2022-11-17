/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:57:42 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/03 17:00:42 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	boule;

	i = 0;
	boule = 1;
	while (str[i])
	{
		if (str[i] < 58 && str[i] > 47)
		{
			boule = 1;
		}
		else
		{
			boule = 0;
			break ;
		}
		i++;
	}
	return (boule);
}
