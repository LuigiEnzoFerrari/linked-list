#include <libqueue.h>

void	nodeDelete(t_node **lst)
{
	if (*lst != NULL)
		free(*lst);
	*lst = NULL;
}
