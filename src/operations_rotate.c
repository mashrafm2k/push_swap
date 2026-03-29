/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moashraf <moashraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:11:24 by moashraf          #+#    #+#             */
/*   Updated: 2026/02/19 15:12:58 by moashraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a)
{
	t_node	*f;
	t_node	*l;

	if (!*a || !(*a)->next)
		return ;
	f = pop_front(a);
	l = *a;
	while (l->next)
		l = l->next;
	l->next = f;
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	t_node	*f;
	t_node	*l;

	if (!*b || !(*b)->next)
		return ;
	f = pop_front(b);
	l = *b;
	while (l->next)
		l = l->next;
	l->next = f;
	write(1, "rb\n", 3);
}

void	rra(t_node **a)
{
	t_node	*p;
	t_node	*l;

	p = NULL;
	l = *a;
	if (!*a || !(*a)->next)
		return ;
	while (l->next)
	{
		p = l;
		l = l->next;
	}
	p->next = NULL;
	push_front(a, l);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	t_node	*p;
	t_node	*l;

	p = NULL;
	l = *b;
	if (!*b || !(*b)->next)
		return ;
	while (l->next)
	{
		p = l;
		l = l->next;
	}
	p->next = NULL;
	push_front(b, l);
	write(1, "rrb\n", 4);
}
