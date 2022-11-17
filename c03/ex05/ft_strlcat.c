/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:59:31 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/06 08:31:29 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (dest[len] && len < size)
		len++;
	while (src[i] && size && len + i < size -1)
	{
		dest[len + i] = src[i];
		i++;
	}
	if (len < size)
		dest[len + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (len + i);
}
