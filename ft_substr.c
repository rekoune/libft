/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:28:19 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/16 11:34:27 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*c;

	a = ft_strlen(s);
	if (start > a)
	{
		start = a;
		b = 0;
	}
	else 
	{
		if (a - start > len)
			b = len;
		else
			b = a - start;
	}
	c = malloc(b + 1);
	if (c == 0)
		return (0);
	ft_strlcpy(c, (s + start), (b + 1));
	return (c);
}
