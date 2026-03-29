/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moashraf <moashraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:20:02 by moashraf          #+#    #+#             */
/*   Updated: 2026/02/20 13:40:17 by moashraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	add_val(t_node **a, char *s)
{
	long	n;
	t_node	*node;
	t_node	*t;

	n = atol_safe(s);
	t = *a;
	while (t)
	{
		if (t->value == (int)n)
			error_exit();
		t = t->next;
	}
	node = malloc(sizeof(t_node));
	if (!node)
		exit(1);
	node->value = (int)n;
	node->next = NULL;
	push_back(a, node);
}

t_node	*parse_args(int ac, char **av)
{
	t_node	*a;
	char	**sp;
	int		i;

	a = NULL;
	if (ac == 2)
	{
		sp = ft_split(av[1], ' ');
		if (!sp)
			exit(1);
		i = -1;
		while (sp[++i])
			add_val(&a, sp[i]);
		free_split(sp);
	}
	else
	{
		i = 0;
		while (++i < ac)
			add_val(&a, av[i]);
	}
	return (a);
}
