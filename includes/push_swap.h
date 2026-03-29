/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moashraf <moashraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:05:23 by moashraf          #+#    #+#             */
/*   Updated: 2026/02/19 12:52:10 by moashraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

/* parse */
t_node	*parse_args(int ac, char **av);

/* stack */
void	push_front(t_node **s, t_node *n);
void	push_back(t_node **s, t_node *n);
t_node	*pop_front(t_node **s);
int		stack_size(t_node *s);
int		is_sorted(t_node *a);

/* index */
void	assign_index(t_node *a);

/* sort */
void	chunk_sort(t_node **a, t_node **b);

/* ops */
void	sa(t_node **a);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);

/* utils */
void	error_exit(void);
long	atol_safe(const char *s);
int		find_max_pos(t_node *b);
void	free_stack(t_node **s);
void	free_split(char **sp);

#endif