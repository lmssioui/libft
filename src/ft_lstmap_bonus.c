/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:08:38 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/15 18:24:35 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*hnew_lst;
	t_list	*tmp;

	hnew_lst = NULL;
	while (lst != NULL)
	{
		new_lst = ft_lstnew((*f)(lst->content));
		if (new_lst == NULL)
		{
			ft_lstclear(&hnew_lst, del);
			while(lst != NULL)
			{
				tmp = lst->next;
				free(lst->content);
				free(lst);
				lst = tmp;
			}
			break ;
		}
		ft_lstadd_back(&hnew_lst, new_lst);
		lst = lst->next;
	}
	return (hnew_lst);
}
