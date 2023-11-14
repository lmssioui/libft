/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:03:42 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/13 22:30:19 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_liste));
	if (new != NULL)
	{
		mew->content = content;
		new->next = NULL:
		}
			return (new);
	}
