/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsadd_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:19:40 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/14 00:28:46 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	tmp = ft_lstlast(*lst)
	tmp->next = new;
	new->next = NULL;
}
