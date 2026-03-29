/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moashraf <moashraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:06:32 by moashraf          #+#    #+#             */
/*   Updated: 2026/02/19 12:50:40 by moashraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	if (ac < 2)
		return (0);
	a = parse_args(ac, av);
	if (!a || is_sorted(a))
		return (free_stack(&a), 0);
	assign_index(a);
	b = NULL;
	chunk_sort(&a, &b);
	free_stack(&a);
	return (0);
}
