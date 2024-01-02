/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:20:53 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/20 11:27:27 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*reverse(char *str)
{
	char	*s;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(str);
	s = malloc((j + 1) * sizeof(char));
	if (s == 0)
		return (0);
	j--;
	while (i < ft_strlen(str))
	{
		s[i] = str[j];
		i++;
		j--;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	char	str[12];
	char	*s;

	nb = n;
	i = 0;
	if (n < 0)
		nb = nb * (-1);
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0)
	{
		str[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	s = reverse(str);
	return (s);
}
