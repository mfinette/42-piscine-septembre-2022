/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:03:53 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/05 08:09:44 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	boule;

	i = 0;
	boule = 1;
	while (str[i])
	{
		if (str[i] < 91 && str[i] > 64)
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
