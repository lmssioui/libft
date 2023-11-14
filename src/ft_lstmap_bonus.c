/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:41:15 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/14 14:29:59 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*hnew_lst;

	hnew_lst = NULL;
	while (lst != NULL)
	{
		new_lst = ft_lstnew((*f)(lst->content));
		if (new_lst == NULL)
		{
			ft_lstclear(&hnew_lst, del);
			break ;
		}
		ft_lstadd_back(&hnew_lst, new_lst);
		lst = lst->next;
	}
	return (hnew_lst);
}
/*void delete_content(void *content)
{
	free(content);
}
#include <stdio.h>

void	*my_function(void *lst)
{
	printf("%s\n", (char *)lst);
	return (lst);
}

int	main(void)
{
	t_list *head = ft_lstnew("apple");
	t_list *node2 = ft_lstnew("banana");
	t_list *node3 = ft_lstnew("cherry");
	head->next = node2;
	node2->next = node3;

	t_list *new_list = ft_lstmap(head, &my_function, &delete_content);

	printf("Original list:\n");
	ft_lstiter(head, &my_function);

	printf("\nMapped list:\n");
	ft_lstiter(new_list, &my_function);

	ft_lstclear(&head, &delete_content);
	ft_lstclear(&new_list, &delete_content);

	return (0);
}*/
