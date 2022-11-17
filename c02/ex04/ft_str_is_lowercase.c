/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:02:14 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/04 16:24:42 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	boule;

	i = 0;
	boule = 1;
	while (str[i])
	{
		if (str[i] < 123 && str[i] > 96)
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
