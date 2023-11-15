/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:46:49 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/15 00:16:06 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*#include <stdio.h>
void my_function(void *lst)
{
	char *s = lst;
	printf("%s|",s);
}
int main()
{
	t_list *head = ft_lstnew("abdellatif");
	t_list *new  = ft_lstnew("Bouyatas");
	head->next = new;
	ft_lstiter(head, my_function);
}*/
