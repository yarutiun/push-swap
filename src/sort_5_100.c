/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:34:36 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/17 15:52:07 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

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
    sort_three(stack_a);
}

void set_positions(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp_a;
    t_stack *temp_b;
    int i = 0;
    temp_a = *stack_a;
    temp_b = *stack_b;
    
    while (temp_a)
    {
        temp_a->pos = i;
        temp_a = temp_a->next;
        i++;
    }
    i = 0;
    while (temp_b)
    {
        temp_b->pos = i;
        temp_b = temp_b->next;
        i++;
    }
}