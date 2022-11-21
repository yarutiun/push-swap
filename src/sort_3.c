/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:08:42 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/21 00:30:12 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

//function sorts three numbers
void sort_three(t_stack **stack_a)
{
    if (stack_a != NULL)
    {   
    t_stack *one;
    one = *stack_a;
    if ((one->value < one->next->value) && (one->value < one->next->next->value) && (one->next->value < one->next->next->value))
        return;
    if ((one->next->value > one->value) && (one->next->value > one->next->next->value) && (one->value < one->next->next->value))
    {
        ft_reverse_rotate_a(stack_a, 1);
        ft_swap_stack(stack_a);
        return;
    }
    if ((one->value < one->next->next->value) && (one->next->value < one->next->next->value) && (one->value > one->next->value))
    {
        ft_swap_stack(stack_a);
        return;
    }
    if ((one->value > one->next->value) && (one->value > one->next->next->value) && (one->next->value > one->next->next->value))
    {
        ft_rotate_a(stack_a, 1);
        ft_swap_stack(stack_a);
        return;
    }
    if ((one->value > one->next->value) && (one->value > one->next->next->value) && (one->next->value < one->next->next->value))
    {
        ft_rotate_a(stack_a, 1);
        return;
    }
    if ((one->value < one->next->value) && (one->value > one->next->next->value) && (one->next->value > one->next->next->value))
    {
        ft_reverse_rotate_a(stack_a, 1);
        return;
    }
    }
}
//function assignes indexes to list
void assign_index (int *sorted, t_stack **stack, int argc)
{
    t_stack *temp;
    int count;

    count = 0;
    while (sorted[count] != sorted[argc - 1])
    {
    temp = *stack;
        while (temp->value != sorted[count])
        {
            temp = temp->next;
        }
            temp->index = count + 1;
            count ++;
    }
}