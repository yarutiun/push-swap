/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intructions_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:13:20 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/10 17:57:32 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void ft_ra(t_stack **stack_a)
{
    t_stack *temp;
    t_stack *first;
    int val;
    first = *stack_a;
    temp = *stack_a;
    while (temp->next != NULL)
    {
        val = temp->value;
        temp->value = temp->next->value;
        temp->next->value = val;
        temp = temp->next;
    }
    first->value = temp->next->value;
}

void ft_rb(t_stack **stack_b)
{
	t_stack	*last;
	t_stack	*first;
	last = *stack_b;
	first = *stack_b;
	while (last->next != NULL)
		last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "rb\n", 3);
	return ;
}
