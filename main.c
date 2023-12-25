/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 21:43:43 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/24 21:43:50 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	fd;
	int	s;

	fd = open("test.c", O_WRONLY | O_TRUNC | O_CREAT);
	printf("fd = %d\n", fd);
	s = 0;
	ft_putnbr_fd(s, fd);
	close(fd);
	return (0);
}
