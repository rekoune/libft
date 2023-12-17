/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:31:26 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/16 18:31:43 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chek(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		start;
	int		lens;
	char	*c;

	i = 0;
	lens = ft_strlen(s);
	if (lens > 0)
		lens--;
	start = 0;
	while (s[i] != 0 && chek(s[i], (char *)set) == 1)
		i++;
	start = i;
	while (lens > start && chek(s[lens], (char *)set) == 1)
		lens--;
	c = ft_substr(s, start, (lens - start) + 1);
	if (c == 0)
		return (0);
	return (c);
}
