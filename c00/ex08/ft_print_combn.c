/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:07:28 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/21 13:16:47 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(i);
		ft_print_combn(i);
		i++;
		ft_putchar(' ');
	}
}

int main()
{
    ft_print_combn(3);

    return 0;
}

