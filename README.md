```c
t_node	*new_node(int data);
```

```c
void	insert_front(t_node **lst, int data);
```

```c
void	insert_end(t_node **lst, int data);
```

```c
t_node	*node_min(t_node *lst);
```

```c
t_node	*node_max(t_node *lst);
```

```c
t_node	*node_last(t_node *lst);
```

```c
size_t	lst_size(t_node *lst);
```


```c
void	lst_print(t_node *lst, int c);
```


```c
t_node	*lst_duplicate(t_node *lst);
```

```c
void	node_free(t_node *lst);
```

```c
void	node_delete(t_node **lst);
```

```c
void	lst_free(t_node *lst);
```

```c
void	node_delete(t_node **lst);
```

```c
. . .	node_append(. . .);
```
```c
. . .	node_pop(. . .);
```

# Data Structure and Algorithms - Linked List  

 A linked list is a linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next. It is a data structure consisting of a collection of nodes which together represent a sequence. In its most basic form, each node contains: data, and a reference (in other words, a link) to the next node in the sequence. This structure allows for efficient insertion or removal of elements from any position in the sequence during iteration. More complex variants add additional links, allowing more efficient insertion or removal of nodes at arbitrary positions. A drawback of linked lists is that access time is linear (and difficult to pipeline). Faster access, such as random access, is not feasible. Arrays have better cache locality compared to linked lists.