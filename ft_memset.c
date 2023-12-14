/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:27:01 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/10 15:04:09 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int c, size_t ln)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = a;
	while (i < ln)
	{
		b[i] = c;
		i++;
	}
	return (a);
}
