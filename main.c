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
	t_list	*test;
	t_list	*test1;
	t_list	*test2;
	t_list	*test3;
	t_list	*test0;
	t_list	*node;

	test = ft_lstnew("0");
	test1 = ft_lstnew("1");
	test->next = test1;
	test2 = ft_lstnew("2");
	test1->next = test2;
	test3 = ft_lstnew("3");
	test2->next = test3;
	test0 = ft_lstnew("5");
	ft_lstadd_front(&test, test0);
	node = test;
	while (node)
	{
		printf("%s\n", node->content);
		node = node->next;
	}
	return (0);
}
