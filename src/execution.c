/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:35:49 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/18 16:37:24 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void	do_double(t_stack **a_stack, t_stack **b_stack, \
		int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		ft_rot(a_stack, b_stack);
		(*cost_a)--;
		(*cost_b)--;
	}
	while (*cost_a < 0 && *cost_b < 0)
	{
		ft_reverse_rotate_both(a_stack, b_stack);
		(*cost_a)++;
		(*cost_b)++;
	}	
}

void	do_a(t_stack **a_stack, int *cost_a)
{
	if (*cost_a != 0)
	{
		while (*cost_a > 0)
		{
			ra(a_stack, 0);
			(*cost_a)--;
		}
		while (*cost_a < 0)
		{
			rra(a_stack, 0);
			(*cost_a)++;
		}
	}
}

void	do_b(t_stack **b_stack, int *cost_b)
{
	if (*cost_b != 0)
	{
		while (*cost_b > 0)
		{
			rb(b_stack, 0);
			(*cost_b)--;
		}
		while (*cost_b < 0)
		{
			rrb(b_stack, 0);
			(*cost_b)++;
		}
	}
}

void	exec_actions(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*node_b;
	int		lowest_cost;
	int		cost;
	int		cost_a;
	int		cost_b;

	node_b = *b_stack;
	lowest_cost = abs_val(node_b->cost_a) + abs_val(node_b->cost_b);
	while (node_b)
	{
		cost = abs_val(node_b->cost_a) + abs_val(node_b->cost_b);
		if (cost <= lowest_cost)
		{
			cost_a = node_b->cost_a;
			cost_b = node_b->cost_b;
			lowest_cost = cost;
		}
		node_b = node_b->next;
	}
	do_double(a_stack, b_stack, &cost_a, &cost_b);
	do_a(a_stack, &cost_a);
	do_b(b_stack, &cost_b);
}