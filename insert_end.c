#include <liblist.h>

/*
** Creates a node with the given data value
** and inserts it into the end of the linked list
*/

void	insert_end(t_node **lst, int data)
{
	t_node	*node;

	node = new_node(data);
	if (*lst != NULL)
		node_last(*lst)->next = node;
	else
		*lst = node;
}
