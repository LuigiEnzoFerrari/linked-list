#include <liblist.h>

/*
** Return the number of nodes in a list from head to tail
*/

size_t	lst_size(t_node *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
