#include <stdio.h>
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
}
