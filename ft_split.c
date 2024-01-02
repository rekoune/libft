/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:28:05 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/18 19:08:55 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *str, char c)
{
	int	i;
	int	counter;
	int	nf;

	i = 0;
	nf = 1;
	counter = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			nf = 1;
		else if (str[i] != c && nf == 1)
		{
			nf = 0;
			counter++;
		}
		i++;
	}
	return (counter);
}

static int	len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != 0)
		i++;
	return (i);
}

static void	fr(char **str, int j)
{
	while (j >= 0)
		free(str[j--]);
	free(str);
}

static char	**mini_split(char const *str, char c, char **s, int n_word)
{
	int	i;

	i = 0;
	while (i < n_word)
	{
		while (*str == c)
			str++;
		if (*str != c && *str != 0)
			s[i++] = ft_substr(str, 0, len(str, c));
		if (s[i - 1] == 0)
		{
			fr(s, i - 1);
			return (0);
		}
		str = str + len(str, c);
	}
	s[i] = 0;
	return (s);
}

char	**ft_split(char const *str, char c)
{
	char	**s;
	int		n_word;
	char	**a;

	if (!str)
		return (0);
	n_word = count(str, c);
	s = malloc((n_word + 1) * sizeof(char *));
	if (s == 0)
		return (0);
	a = mini_split(str, c, s, n_word);
	return (a);
}
