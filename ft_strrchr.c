/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:37:01 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/09 14:39:21 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	ln;
	int	i;

	ln = ft_strlen(s);
	i = 0;
	while (ln >= i)
	{
		if (s[ln] == c)
			return ((char *)&s[ln]);
		ln--;
	}
	return (0);
}
