/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moashraf <moashraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:20:50 by moashraf          #+#    #+#             */
/*   Updated: 2026/02/19 15:18:30 by moashraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_front(t_node **s, t_node *n)
{
	if (!n)
		return ;
	n->next = *s;
	*s = n;
}

void	push_back(t_node **s, t_node *n)
{
	t_node	*t;

	if (!*s)
	{
		*s = n;
		return ;
	}
	t = *s;
	while (t->next)
		t = t->next;
	t->next = n;
}

t_node	*pop_front(t_node **s)
{
	t_node	*t;

	if (!*s)
		return (NULL);
	t = *s;
	*s = (*s)->next;
	t->next = NULL;
	return (t);
}

int	stack_size(t_node *s)
{
	int	i;

	i = 0;
	while (s)
	{
		i++;
		s = s->next;
	}
	return (i);
}

int	is_sorted(t_node *a)
{
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}
