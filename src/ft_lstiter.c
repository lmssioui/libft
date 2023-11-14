/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 02:14:29 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/14 03:27:30 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while(lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
#include<stdio.h>
void my_function(void *content)
{
	printf("%s\n", (char *)content);
}
int main(void)
{
	t_list *head = ft_lstnew("apple");
	t_list *node2 = ft_lstnew("banana");
	head->next = node2;
	ft_lstiter(head, &my_function);
	return 0;
}
