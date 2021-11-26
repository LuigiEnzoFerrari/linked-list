#include <liblist.h>

/*
** Return a pointer to a linked list
** with the same values, size and value order.
*/

t_node	*lst_duplicate(t_node *lst)
{
	t_node	*cpy;

	cpy = NULL;
	while (lst)
	{
		insert_end(&cpy, lst->data);
		lst = lst->next;
	}
	return (cpy);
}
