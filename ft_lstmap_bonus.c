/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:08:38 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/22 12:34:58 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_list;
	t_list	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		if (lst->content != NULL)
		{
			new_content = f(lst->content);
			new_list = ft_lstnew(new_content);
			if (new_list == NULL)
			{
				del(new_content);
				ft_lstclear(&head, del);
				return (NULL);
			}
			ft_lstadd_back(&head, new_list);
		}
		lst = lst->next;
	}
	return (head);
}
