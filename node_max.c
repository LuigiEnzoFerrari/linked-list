#include <liblist.h>

/*
** Return a pointer to a node in a linked list with the max value on it.
** if the list has the max value duplicated the return should be the
** pointer to the first occurrence.
*/

t_node	*node_max(t_node *lst)
{
	t_node	*ptr;

	ptr = lst;
	while (lst != NULL)
	{
		if (lst->data > ptr->data)
			ptr = lst;
		lst = lst->next;
	}
	return (ptr);
}
