/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moashraf <moashraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:18:10 by moashraf          #+#    #+#             */
/*   Updated: 2026/02/19 15:15:41 by moashraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	find_max_pos(t_node *b)
{
	int	max;
	int	pos;
	int	i;

	max = b->index;
	pos = 0;
	i = 0;
	while (b)
	{
		if (b->index > max)
		{
			max = b->index;
			pos = i;
		}
		b = b->next;
		i++;
	}
	return (pos);
}

long	atol_safe(const char *s)
{
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	if (!*s)
		error_exit();
	while (*s)
	{
		if (*s < '0' || *s > '9')
			error_exit();
		if (n > (long)(INT_MAX - (*s - '0')) / 10)
			error_exit();
		n = n * 10 + (*s++ - '0');
	}
	n *= sign;
	if (n < INT_MIN || n > INT_MAX)
		error_exit();
	return (n);
}
