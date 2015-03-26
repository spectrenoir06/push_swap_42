/*
 * trie1.c
 *
 *  Created on: 21 mars 2015
 *      Author: spectrenoir
 */

#include "push_swap.h"


int		need_sa(t_stacks *st)
{
		if (st->nb_sa > 1)
		{
			return (*(int *)st->sa->content > *(int *)st->sa->next->content);
		}
		return (0);
}

void	trie(t_stacks *stacks)
{
	int min;
	int index;
	int	bo = 1;

	if (is_presk_sort(stacks))
	{
		do_rra(stacks);
		ft_putchar(' ');
		do_rra(stacks);
		ft_putchar(' ');
		do_sa(stacks);
		ft_putchar(' ');
		do_ra(stacks);
		ft_putchar(' ');
		do_ra(stacks);
		ft_putchar('\n');
		return ;
	}
	while (stacks->nb_sa > 1)
	{
		if (is_sort(stacks))
			return;
		min = sa_min(stacks, &index);
		while (*(int *)stacks->sa->content != min)
		{
			if (is_sort(stacks))
				break;
			if (bo)
				bo = 0;
			else
				ft_putchar(' ');
			if (need_sa(stacks))
				do_sa(stacks);
			else if (index >= (stacks->nb_sa / 2))
				do_rra(stacks);
			else
				do_ra(stacks);
		}
		if (is_sort(stacks))
			break;
		if (bo)
			bo = 0;
		else
			ft_putchar(' ');do_pb(stacks);
	}
	while (stacks->nb_sb)
	{
		ft_putchar(' ');
		do_pa(stacks);
	}
	ft_putchar('\n');
}

int		*lst2tab(t_list **lst, int *size)
{
	t_list *tmp;
	int *tab;

	*size = 0;
	tmp = *lst;
	while (tmp)
	{
		(*size)++;
		tmp = tmp->next;
	}
	tmp = *lst;
	tab = (int *)malloc(sizeof(int) * (*size));
	*size = 0;
	while (tmp)
	{
		tab[(*size)++] = *(int *)tmp->content;
		tmp = tmp->next;
	}
	return (tab);
}
