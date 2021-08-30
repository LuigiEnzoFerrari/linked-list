#include <libqueue.h>

/*
** Free all the nodes on the list using recursion
*/

void	lstFree(t_node *lst)
{
	if (lst == NULL)
		return ;
	lstFree(lst->next);
	nodeFree(lst);
}
