#include <libqueue.h>

/*
** Free all the nodes on the list using recursion
** 
*/

void	lstDelete(t_node **lst)
{
	if (*lst == NULL)
		return ;
	lstDelete(&(*lst)->next);
	nodeDelete(lst);
}
