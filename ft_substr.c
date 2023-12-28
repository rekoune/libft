/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:28:19 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/16 11:53:13 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_size;
	size_t	m_size;
	char	*c;

	if (!s)
		return (0);
	s_size = ft_strlen(s);
	if (start > s_size)
	{
		start = s_size;
		m_size = 0;
	}
	else 
	{
		if (s_size - start > len)
			m_size = len;
		else
			m_size = s_size - start;
	}
	c = malloc(m_size + 1);
	if (c == 0)
		return (0);
	ft_strlcpy(c, (s + start), (m_size + 1));
	return (c);
}
