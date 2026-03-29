/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap_push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moashraf <moashraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:11:05 by moashraf          #+#    #+#             */
/*   Updated: 2026/02/19 15:12:55 by moashraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a)
{
	t_node	*f;
	t_node	*s;

	if (!*a || !(*a)->next)
		return ;
	f = *a;
	s = f->next;
	f->next = s->next;
	s->next = f;
	*a = s;
	write(1, "sa\n", 3);
}

void	pb(t_node **a, t_node **b)
{
	t_node	*t;

	t = pop_front(a);
	if (!t)
		return ;
	push_front(b, t);
	write(1, "pb\n", 3);
}

void	pa(t_node **a, t_node **b)
{
	t_node	*t;

	t = pop_front(b);
	if (!t)
		return ;
	push_front(a, t);
	write(1, "pa\n", 3);
}
