/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 07:48:10 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/05 08:22:53 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{		
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	if (len + 1 < size)
	{
		while (i < len + 1)
		{
			dest[i] = src[i];
			i++;
		}
	}	
	else if (size > 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}	
		dest[i] = '\0';
	}	
	return (x);
}
