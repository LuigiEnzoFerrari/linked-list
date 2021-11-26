#include <liblist.h>

/*
** Free the given pointer
** to a node in a linked list
*/

void	node_free(t_node *lst)
{
	if (lst != NULL)
		free(lst);
}
