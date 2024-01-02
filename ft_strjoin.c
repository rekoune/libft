/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:20:03 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/16 15:20:12 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	int		i;
	int		s1len;
	int		s2len;

	i = 0;
	if ((!s1) || (!s2))
		return (0);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	c = malloc ((s1len + s2len + 1) * sizeof (char));
	if (c == 0)
		return (0);
	ft_strlcpy(c, s1, s1len + 1);
	ft_strlcat(c, s2, s2len + s1len + 1);
	return (c);
}
