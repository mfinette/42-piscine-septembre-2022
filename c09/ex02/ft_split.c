/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:25:03 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/20 08:58:14 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(char *src, int n)
{
	char	*dup;
	int		lsrc;
	int		i;

	lsrc = 0;
	i = 0;
	while (src[lsrc] && lsrc < n)
		lsrc++;
	dup = malloc((lsrc + 1) * sizeof(char));
	while (i < lsrc)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

int	ft_cstr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	ft_wlen(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_cstr(sep, str[i]))
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_cstr(charset, str[i]) && (ft_cstr(charset, str[i - 1]) || !i))
			words++;
		i++;
	}
	tab = malloc(sizeof(char *) * (words + 1));
	i = 0;
	words = -1;
	while (str[i])
	{
		if (!ft_cstr(charset, str[i]) && (ft_cstr(charset, str[i - 1]) || !i))
			tab[++words] = ft_strndup(&str[i], ft_wlen(&str[i], charset));
		i++;
	}
	tab[words + 1] = 0;
	return (tab);
}
