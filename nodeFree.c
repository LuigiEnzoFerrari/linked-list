#include <libqueue.h>

void	nodeFree(t_node *lst)
{
	if (lst != NULL)
		free(lst);
}