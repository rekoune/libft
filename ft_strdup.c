/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:53:48 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/15 21:53:51 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;
	int		j;
	int		i;

	j = ft_strlen(s);
	i = 0;
	a = malloc (j + 1);
	if (a == 0)
		return (0);
	while (i < j)
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
