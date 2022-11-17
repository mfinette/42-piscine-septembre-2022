/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:07:02 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/03 17:08:17 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	boule;

	i = 0;
	boule = 1;
	while (str[i])
	{
		if (str[i] < 127 && str[i] > 31)
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
