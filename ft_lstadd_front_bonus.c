/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:45:07 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/26 20:50:29 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new) 
	{
		new->next = *lst;
		*lst = new;
	}
}
#include <stdio.h>
int main()
{
	t_list *new = ft_lstnew("jff"); //ft_lstnew(ft_strdup("savvwq"));
	t_list *head = ft_lstnew("kfebfj"); //ft_lstnew(ft_strdup("bbfbe"));
	t_list *tmp = head;
	while (tmp)
	{
		printf("%s\n",(char *)tmp->content);
		tmp = tmp->next;
	}
	printf("-------------------******---------------\n");
	ft_lstadd_front(&head,new);
	tmp = new;
	while (tmp)
	{
		printf("%s\n",(char *)tmp->content);
		tmp = tmp->next;
	}
}
