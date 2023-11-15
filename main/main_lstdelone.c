void	ft_del(void *content)
{
	free(content);
}
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	if(!head)
		return (1);
	head->content = malloc(18);
	if (!head->content)
		return 1;
	strcpy(head->content, "abdellatif student");
	ft_lstdelone(head, ft_del);
	if (head == NULL)
		printf("List cleared successfully\n");
	else
		printf("List was not cleared properly\n");

    return 0;

}

