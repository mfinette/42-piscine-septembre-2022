/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:13:53 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/22 16:07:55 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*return_tab;

	i = 0;
	return_tab = malloc(length * sizeof(int));
	if (!return_tab)
		return (0);
	while (i < length)
	{
		return_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (return_tab);
}
