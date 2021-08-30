#include <libqueue.h>
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
** Print on stdout all the data values on the lst, each one followed
** by a endline.
*/

void	lstPrint(t_node *lst)
{
	while (lst)
	{
		putnbr(lst->data);
		pchar('\n');
		lst = lst->next;
	}
}
