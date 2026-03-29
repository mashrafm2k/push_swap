/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moashraf <moashraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:21:09 by moashraf          #+#    #+#             */
/*   Updated: 2026/02/19 15:14:52 by moashraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_node **s)
{
	t_node	*t;

	while (*s)
	{
		t = (*s)->next;
		free(*s);
		*s = t;
	}
}

void	free_split(char **sp)
{
	int	i;

	i = 0;
	if (!sp)
		return ;
	while (sp[i])
		free(sp[i++]);
	free(sp);
}
