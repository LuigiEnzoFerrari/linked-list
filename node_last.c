#include <liblist.h>

/*
** Return a pointer to the last
** valid node on the list
*/

t_node	*node_last(t_node *lst)
{
	if (lst != NULL)
		while (lst->next)
			lst = lst->next;
	return (lst);
}
