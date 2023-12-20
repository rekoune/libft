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

// counting the number of the words
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

// counting the lenght of the words
static int	len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != 0)
		i++;
	return (i);
}

// free the memorie
static void	fr(char **str, int j)
{
	while (j >= 0)
		free(str[j--]);
	free(str);
}

static char	**mini_split(char const *str, char c, char **s, int n_word)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != 0 && j < n_word)
			s[j++] = ft_substr(&str[i], 0, len(&str[i], c));
		if (s[j - 1] == 0)
		{
			fr(s, j - 1);
			return (NULL);
		}
		str = str + len(&str[i], c);
		i++;
	}
	s[j] = NULL;
	return (s);
}

char	**ft_split(char const *str, char c)
{
	char	**s;
	int		n_word;
	char	**a;

	n_word = count(str, c);
	s = malloc((n_word + 1) * sizeof(char *));
	if (s == 0)
		return (NULL);
	a = mini_split(str, c, s, n_word);
	return (a);
}
