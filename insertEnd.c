#include <libqueue.h>

/*
** Creates a node with the given data value
** and inserts it into the end of the linked list
*/

void	insertEnd(t_node **lst, int data)
{
	t_node	*node;

	node = newNode(data);
	if (*lst != NULL)
		nodeLast(*lst)->next = node;
	else
		*lst = node;
}
