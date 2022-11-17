/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 08:56:34 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/05 08:07:55 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	boule;

	i = 0;
	boule = 1;
	while (str[i])
	{
		if ((str[i] < 91 && str[i] > 64) || (str[i] < 123 && str[i] > 96))
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
