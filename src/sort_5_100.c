/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:34:36 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/22 17:26:57 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_5_100(t_stack **stack_a, t_stack **stack_b)
{
	put_to_b(stack_a, stack_b);
	sort_three_one(stack_a);
	while (*stack_b)
	{
		set_positions(stack_a, stack_b);
		find_tp(stack_a, stack_b);
		assign_cost(stack_a, stack_b);
		exec_actions(stack_a, stack_b);
		ft_pa(stack_b, stack_a);
	}
	final_sort(stack_a);
}

int	get_maximum_stack_index(t_stack **stack)
{
	t_stack	*temp;
	int		i;

	temp = *stack;
	i = temp->index;
	temp = temp->next;
	while (temp)
	{
		if (i < temp->index)
			i = temp->index;
		temp = temp->next;
	}
	return (i);
}

int	get_lowest_index_pos(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*temp2;
	int		pos;

	temp = *stack;
	temp2 = *stack;
	pos = 0;
	while (temp)
	{
		if (temp->index < temp2->index)
			temp2 = temp;
		temp = temp->next;
	}
	pos = temp2->pos;
	return (pos);
}

void	find_tp_lowind(t_stack **a_stack, t_stack *node_b)
{
	t_stack	*node_a;
	int		lowest_diff;
	int		diff;

	node_a = *a_stack;
	lowest_diff = get_maximum_stack_index(a_stack);
	while (node_a)
	{
		diff = node_a->index - node_b->index;
		if (diff > 0 && diff < lowest_diff)
		{
			lowest_diff = diff;
			node_b->target_pos = node_a->pos;
		}
		node_a = node_a->next;
	}
	node_a = *a_stack;
}

void	find_tp(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*node_b;
	int		max;
	int		low;

	node_b = *b_stack;
	max = get_maximum_stack_index(a_stack);
	low = get_lowest_index_pos(a_stack);
	while (node_b)
	{
		if (node_b->index > max)
			node_b->target_pos = low;
		else
		{
			find_tp_lowind(a_stack, node_b);
		}
		node_b = node_b->next;
	}
}
