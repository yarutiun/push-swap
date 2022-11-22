/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assigning.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:23:26 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/22 17:24:31 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//pushes all values to be but 3 last ones
void	put_to_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	temp = *stack_a;
	temp = temp->next;
	while (temp->next->next != NULL)
	{
		ft_pb(stack_a, stack_b);
		temp = temp->next;
	}
}

//sets positions in both stacks
void	set_positions(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;
	int		i;

	i = 0;
	temp_a = *stack_a;
	temp_b = *stack_b;
	while (temp_a)
	{
		temp_a->pos = i;
		i++;
		temp_a = temp_a->next;
	}
	i = 0;
	while (temp_b)
	{
		temp_b->pos = i;
		i++;
		temp_b = temp_b->next;
	}
}

void	assign_cost(t_stack **stack_a, t_stack **stack_b)
{
	int		len_stack_a;
	int		len_stack_b;
	t_stack	*node_b;

	node_b = *stack_b;
	len_stack_a = len_of_list(stack_a);
	len_stack_b = len_of_list(stack_b);
	while (node_b)
	{
			node_b->cost_b = node_b->pos;
		if (node_b->pos > len_stack_b / 2)
			node_b->cost_b = (len_stack_b - node_b->pos) * -1;
		node_b->cost_a = node_b->target_pos;
		if (node_b->target_pos > len_stack_a / 2)
			node_b->cost_a = (len_stack_a - node_b->target_pos) * -1;
		node_b = node_b->next;
	}
}
