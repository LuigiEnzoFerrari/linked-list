#include <liblist.h>
#include <stdio.h>

static void	pchar(char c)
{
	write(1, &c, 1);
}

static void	putnbr(int nb)
{
	long int	num;

	num = nb;
	if (nb < 0)
	{
		pchar('-');
		num = -num;
	}
	if (num >= 10)
		putnbr(num / 10);
	pchar((num % 10) + '0');
}

/*
** Print on stdout all the data values in the list,
** each one followed by a c value.
*/

void	lst_print(t_node *lst, int c)
{
	while (lst != NULL)
	{
		putnbr(lst->data);
		lst = lst->next;
		if (lst != NULL)
			pchar(c);
	}
	pchar('\n');
}
