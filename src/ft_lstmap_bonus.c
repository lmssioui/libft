/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:08:38 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/15 02:07:36 by abouyata         ###   ########.fr       */
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
/*void *my_function(void *lst)
{
    size_t i = 0;
    char *src = (char *)lst;
    char *new_content = malloc(strlen(src) + 1);

    if (new_content == NULL) {
        return NULL;
    }

    strcpy(new_content, src);

    while (new_content[i])
    {
        if (new_content[i] >= 'a' && new_content[i] <= 'z')
        {
            new_content[i] = new_content[i] - 32;
        }
        i++;
    }

    return new_content;
}
void	my_delete(void *lst)
{
	free(lst);
}
#include<stdio.h>

int main()
{
	t_list *head = ft_lstnew("Apple");
	t_list *new = ft_lstnew("hamza");
	t_list *node = ft_lstnew("AbdLlatif");
	head->next = new;
	new->next = node;
	t_list *tmp = head;
	printf("******befor*******\n");
	while(tmp)
	{
		printf("%s\n",(char *)tmp->content);
		tmp = tmp->next;
	}
	printf("------after------\n");
	t_list *str =ft_lstmap(head, my_function, my_delete);
	while(str)
	{
		printf("%s\n",(char *)str->content);
		str = str->next;
	}
}*/
