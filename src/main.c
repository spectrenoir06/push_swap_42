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
	printf(" NULL\n");
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
	//print_stacks(&all);

	trie(&all);

	printf("\nNombre de coups = %d\n", all.nb_act);

	//print_stacks(&all);

	return (0);
}
