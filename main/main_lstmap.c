void *my_function(void *lst)
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
}
