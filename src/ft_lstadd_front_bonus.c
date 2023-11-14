/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:45:07 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/14 20:45:13 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int main()
{
	t_list *head = ft_lstnew("aplle");
	t_list *nodeone = ft_lstnew("ourika");
	head->next = nodeone;
	ft_lstadd_front(&head,nodeone);
	printf("%s\n",head->content);
}*/	
