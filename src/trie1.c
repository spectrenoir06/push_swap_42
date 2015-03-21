/*
 * trie1.c
 *
 *  Created on: 21 mars 2015
 *      Author: spectrenoir
 */

#include "push_swap.h"

void	trie(t_stacks *stacks)
{
	int min;

	while (stacks->nb_sa > 0)
	{
		min = sa_min(stacks);
		while (*(int *)stacks->sa->content != min)
			do_ra(stacks);
		do_pb(stacks);
	}
	while (stacks->nb_sb)
		do_pa(stacks);

}
