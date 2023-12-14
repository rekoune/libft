/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:11:40 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/14 12:13:35 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	lend;
	size_t	lens;
	int		i;

	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	i = 0;
	if (dsize == 0)
		return (lens);
	else if (dsize >= lend)
	{
		while (i + lend < (dsize - 1) && src[i])
		{
			dest[lend + i] = src[i];
			i++;
		}
		dest[lend + i] = '\0';
		return (lend + lens);
	}
	return (dsize + lens);
}
