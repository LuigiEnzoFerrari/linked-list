#include <libqueue.h>

/*
** Creates a node with the given data value
** and inserts it into the front of  the linked list
*/

void	insertFront(t_node **lst, int data)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	node->data = data;
	if (lst != NULL && *lst != NULL)
		node->next = *lst;
	*lst = node;
}
