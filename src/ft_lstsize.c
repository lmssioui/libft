/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:06:27 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/14 00:10:10 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

int ft_lstsize(t_list *lst)
{
	t_list	 *tmp;
	int	count;

	tmp = lst;
	count = 0;
	while (tmp->next != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
