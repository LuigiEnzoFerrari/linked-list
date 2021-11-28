
```c
t_node	*new_node(int data);
```

Return a allocated node of a linked list with the given data value on it.

```c
void	insert_front(t_node **lst, int data);
```

Appends inside a given linked list a new node with the given data value as the first node of the list.

```c
void	insert_end(t_node **lst, int data);
```

Appends inside a given linked list a new node with the given data value as the last node of the list.

```c
t_node	*node_min(t_node *lst);
```

Return a pointer to the node with the mininum value inside.

```c
t_node	*node_max(t_node *lst);
```

Return a pointer to the node with the max value inside.

```c
t_node	*node_last(t_node *lst);
```

Return a pointer to the last not NULL node of a linked list.

```c
size_t	lst_size(t_node *lst);
```

Return the number of not NULL nodes of the give linked list.

```c
void	lst_print(t_node *lst, int c);
```
Prints all the values insides each node of the given list separeted by **c** value.

```c
t_node	*lst_duplicate(t_node *lst);
```

Return a duplicated linked list of the given linked list.

```c
void	node_free(t_node *lst);
```

Free the given node of a linked list.


```c
void	node_delete(t_node **lst);
```

Free the given node of a linked list and points it to a NULL pointer.

```c
void	lst_free(t_node *lst);
```

Free all the nodes of the given linked list.

```c
void	lst_delete(t_node **lst);
```

Free all the nodes of the given linked list and points each one to a NULL pointer.

```c
. . .	node_append(. . .);
```

```c
. . .	node_pop(. . .);
```

# Data Structure and Algorithms - Linked List  

 A linked list is a linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next. It is a data structure consisting of a collection of nodes which together represent a sequence. In its most basic form, each node contains: data, and a reference (in other words, a link) to the next node in the sequence. This structure allows for efficient insertion or removal of elements from any position in the sequence during iteration. More complex variants add additional links, allowing more efficient insertion or removal of nodes at arbitrary positions. A drawback of linked lists is that access time is linear (and difficult to pipeline). Faster access, such as random access, is not feasible. Arrays have better cache locality compared to linked lists.