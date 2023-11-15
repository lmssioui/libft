            
#include <stdio.h>
#include <stdlib.h> // For malloc, free
#include <string.h>

// Structure for a basic linked list node
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;
// Function to delete a single node
void ft_lstdelone(t_list *lst, void (*del)(void*)) {
    if (lst) {
        del(lst->content); // Assuming content needs to be freed
        free(lst);
    }
}

// Function to free the entire linked list
void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list    *tmp;

    while (*lst != NULL)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
    *lst = NULL;
}


// Function to free a simple allocated memory (as an example)
void my_function(void *content) {
    free(content);
}

int main() {
    // Create a linked list manually for demonstration purposes
    t_list *head = malloc(sizeof(t_list));
    if (!head) {
        // Handle memory allocation failure
        return 1;
    }
    head->content = malloc(5); // Allocating memory for content
    if (!(head->content)) {
        // Handle memory allocation failure
        free(head);
        return 1;
    }
    strcpy(head->content, "1337"); // Assuming content is a string
    head->next = malloc(sizeof(t_list));
    if (!(head->next)) {
        // Handle memory allocation failure
        free(head->content);
        free(head);
        return 1;
    }
    head->next->content = malloc(10); // Allocating memory for content
    if (!(head->next->content)) {
        // Handle memory allocation failure
        free(head->next);
        free(head->content);
        free(head);
        return 1;
    }
    strcpy(head->next->content, "Marrakech"); // Assuming content is a string
    head->next->next = NULL;
    
    // Call ft_lstclear to free the entire list
    ft_lstclear(&head, my_function);

    if (head == NULL)
        printf("List cleared successfully\n");
    else
        printf("List was not cleared properly\n");

    return 0;
}
