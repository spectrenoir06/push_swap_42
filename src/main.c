/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 12:01:20 by aalliot           #+#    #+#             */
/*   Updated: 2015/03/19 12:02:42 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void	print_stacks(t_stacks *st)
{
	t_list *tmp;

	tmp = st->sa;
	printf("Pile A (%d elems): ", st->nb_sa);
	while (tmp)
	{
		printf(" %d ->",*((int *)tmp->content));
		tmp = tmp->next;
	}
	printf(" NULL\n");

	tmp = st->sb;
	printf("Pile B (%d elems): ", st->nb_sb);
	while (tmp)
	{
		printf(" %d ->",*((int *)tmp->content));
		tmp = tmp->next;
	}
	printf(" NULL\n\n");
}

int		main(int argc, char **argv)
{
	int nb;
	t_stacks	all;

	all.sa = NULL;
	all.sb = NULL;
	all.nb_sa = 0;
	all.nb_sb = 0;
	while (all.nb_sa + 1 < argc)
	{
		nb = ft_atoi(argv[(all.nb_sa++) + 1]);
		ft_lstsmartpushback(&all.sa, ft_lstnew(&nb, sizeof(int)));
	}
	do_pb(&all);
	do_pb(&all);
	do_pb(&all);
	do_pb(&all);
	print_stacks(&all);

	do_sa(&all);
	print_stacks(&all);

	do_sb(&all);
	print_stacks(&all);

	do_pa(&all);
	print_stacks(&all);

	do_pb(&all);
	print_stacks(&all);

	do_ra(&all);
	print_stacks(&all);

	do_rb(&all);
	print_stacks(&all);

	do_rra(&all);
	print_stacks(&all);

	do_rrb(&all);
	print_stacks(&all);

	do_rrr(&all);
	print_stacks(&all);

	do_ss(&all);
	print_stacks(&all);

	return (0);
}
