#include <liblist.h>

/*
** Return a allocated node of a linked list
** with the given data value on it.
*/

t_node	*new_node(int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->data = data;
	return (node);
}
