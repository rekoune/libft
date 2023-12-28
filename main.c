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

void delete (void *content)
{
	free(content);
}
int	main(void)
{
	t_list *node;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *head;

	node = ft_lstnew(ft_strdup("abdellah"));
	printf("%p\n", node);
	head = node;
	node1 = ft_lstnew(ft_strdup("abdellah"));
	node->next = node1;
	node2 = ft_lstnew(ft_strdup("abdellah"));
	node1->next = node2;
	node3 = ft_lstnew(ft_strdup("abdellah"));
	node2->next = node3;
	printf("the content befor del : %s\n", (*node).content);
	ft_lstclear(&head, delete);
	printf("the content after the del : %s\n", (*node).content);
}