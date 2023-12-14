/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:50:14 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/13 19:20:51 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	while ((i + 1) < dsize && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i < dsize)
		dest[i] = '\0';
	return (j);
}
