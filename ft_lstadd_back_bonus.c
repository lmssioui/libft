/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:44:39 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/14 21:10:50 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
/*#include <stdio.h>
int	main(void)
{
	t_list *head = ft_lstnew("aplle");
	t_list *node = ft_lstnew("ourika");
	t_list *tmp;
	head->next = node;
	tmp = head;
	while (tmp)
	{

		printf("%s\n",tmp->content);
		tmp = tmp->next;
	}
	t_list *node1  = ft_lstnew("armat");
	ft_lstadd_back(&head,node1);
	printf(".............\n");
	while(head)
	{
		printf("%s\n",head->content);
		head = head->next;
	}
}*/
