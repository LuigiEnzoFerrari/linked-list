#include <liblist.h>

/*
** Free and delete the given pointer
** to a node in a linked list
*/

void	node_delete(t_node **lst)
{
	if (*lst != NULL)
		free(*lst);
	*lst = NULL;
}
