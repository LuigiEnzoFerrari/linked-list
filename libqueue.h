#ifndef LIBQUEUE_H
# define LIBQUEUE_H

# include <stddef.h>
# include <stdlib.h>

/*
** Node struct of a linked list which has a int value data.
*/

struct s_node
{
	int				data;
	struct s_node	*next;
};

typedef struct s_node	t_node;

t_node	*newNode(int data);
t_node	*nodeLast(t_node *lst);
void	insertFront(t_node **lst, int data);
void	insertEnd(t_node **lst, int data);

#endif