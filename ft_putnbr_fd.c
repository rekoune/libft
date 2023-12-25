/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 10:47:50 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/25 10:47:54 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c[12];
	long	nb;

	i = 0;
	nb = n;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	while (nb > 0)
	{
		c[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(c[i], fd);
		i--;
	}
}
