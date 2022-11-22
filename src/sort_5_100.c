/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:34:36 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/22 16:28:15 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

//pushes all values to be but 3 last ones
void put_to_b(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;
    temp = *stack_a;
    temp = temp->next;
    while (temp->next->next != NULL)
    {
        ft_pb(stack_a, stack_b);
        temp = temp->next;
    }
}

void sort_5_100(t_stack **stack_a, t_stack **stack_b)
{
    put_to_b(stack_a, stack_b);
	// print_nodes_index(stack_b);
    sort_three(stack_a);
    while(*stack_b)
    {
    set_positions(stack_a, stack_b);
    find_tp(stack_a, stack_b);
    assign_cost(stack_a, stack_b);
    exec_actions(stack_a, stack_b);
    ft_pa(stack_b, stack_a);
    }
    final_sort(stack_a);
}

//sets positions in both stacks
void set_positions(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp_a;
    t_stack *temp_b;
    int i;

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

int get_maximum_stack_index(t_stack **stack)
{
    t_stack *temp;
    temp = *stack;
    int i;
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

int get_lowest_index_pos(t_stack **stack)
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

void assign_cost(t_stack **stack_a, t_stack **stack_b)
{
    int len_stack_a;
    int len_stack_b;
    t_stack *node_b;

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

void	do_double(t_stack **a_stack, t_stack **b_stack,
		int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		ft_rotate_both(a_stack, b_stack);
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
			ft_rotate_a(a_stack, 1);
			(*cost_a)--;
		}
		while (*cost_a < 0)
		{
			ft_reverse_rotate_a(a_stack, 1);
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
			ft_rotate_b(b_stack, 1);
			(*cost_b)--;
		}
		while (*cost_b < 0)
		{
			ft_reverse_rotate_b(b_stack, 1);
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
	lowest_cost = find_absolute_value(node_b->cost_a) + find_absolute_value(node_b->cost_b);
	while (node_b)
	{
		cost = find_absolute_value(node_b->cost_a) + find_absolute_value(node_b->cost_b);
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