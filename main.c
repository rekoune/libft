/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arekoune <arekoune@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:27:35 by arekoune          #+#    #+#             */
/*   Updated: 2023/12/14 12:07:18 by arekoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char src[20] = "rekoune";
	char dest[20] = "abdellah";
	char s[20] = "rekoune";
    char b[20] = "abdellah";
	int  d;
	int  e;

	d = ft_strlcat(dest, src, 16);
	e = strlcat(b, s, 16);
	printf(">>>> mine : %d dest =  %s\n",d, dest);
	printf(">>>>  sys : %d dest =  %s\n",e, b);
	



}
