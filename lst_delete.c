#include <liblist.h>

/*
** Free and delete all the nodes
** on the list using recursion
*/

void	lst_delete(t_node **lst)
{
	if (*lst == NULL)
		return ;
	lst_delete(&(*lst)->next);
	node_delete(lst);
}
