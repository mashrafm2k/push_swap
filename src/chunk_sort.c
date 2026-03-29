/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moashraf <moashraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:30:04 by moashraf          #+#    #+#             */
/*   Updated: 2026/02/19 15:08:09 by moashraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_pos(t_node *b, int max)
{
	int	i;

	i = 0;
	while (b)
	{
		if (b->index == max)
			return (i);
		i++;
		b = b->next;
	}
	return (0);
}

static void	push_back_max(t_node **a, t_node **b)
{
	int	pos;
	int	size;

	while (*b)
	{
		size = stack_size(*b);
		pos = find_pos(*b, size - 1);
		if (pos <= size / 2)
			while (pos-- > 0)
				rb(b);
		else
			while (pos++ < size)
				rrb(b);
		pa(a, b);
	}
}

static void	pb_and_maybe_rb(t_node **a, t_node **b, int *i, int rotate)
{
	pb(a, b);
	if (rotate)
		rb(b);
	(*i)++;
}

static void	push_chunks(t_node **a, t_node **b, int size)
{
	int	i;
	int	chunk;
	int	limit;

	i = 0;
	if (size <= 100)
		chunk = 5;
	else
		chunk = 11;
	limit = size / chunk;
	while (*a)
	{
		if ((*a)->index <= i)
			pb_and_maybe_rb(a, b, &i, 1);
		else if ((*a)->index <= i + limit)
			pb_and_maybe_rb(a, b, &i, 0);
		else
			ra(a);
	}
}

void	chunk_sort(t_node **a, t_node **b)
{
	int	size;

	size = stack_size(*a);
	push_chunks(a, b, size);
	push_back_max(a, b);
}
