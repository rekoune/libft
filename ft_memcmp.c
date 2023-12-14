/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:42:38 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/13 15:45:07 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s3;
	const unsigned char	*s4;
	size_t				i;

	s3 = s1;
	s4 = s2;
	i = 0;
	while (i < n)
	{
		if (s3[i] != s4[i])
			return ((int)(s3[i] - s4[i]));
		i++;
	}
	return (0);
}
