/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moashraf <moashraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:40:09 by moashraf          #+#    #+#             */
/*   Updated: 2026/02/20 13:32:24 by moashraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_arr(int *a, int n)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

static void	fill_array(int *arr, t_node *a)
{
	int	i;

	i = 0;
	while (a)
	{
		arr[i] = a->value;
		i++;
		a = a->next;
	}
}

static void	set_indexes(t_node *a, int *arr)
{
	int	i;

	while (a)
	{
		i = 0;
		while (arr[i] != a->value)
			i++;
		a->index = i;
		a = a->next;
	}
}

void	assign_index(t_node *a)
{
	int		n;
	int		*arr;

	n = stack_size(a);
	arr = malloc(sizeof(int) * n);
	if (!arr)
		error_exit();
	fill_array(arr, a);
	sort_arr(arr, n);
	set_indexes(a, arr);
	free(arr);
}
