#include <liblist.h>

/*
** Free all the nodes on the list using recursion.
*/

void	lst_free(t_node *lst)
{
	if (lst == NULL)
		return ;
	lst_free(lst->next);
	node_free(lst);
}
