/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:08:42 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/15 16:40:13 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void sort_three(t_stack **stack_a)
{
    if (stack_a != NULL)
    {   
    t_stack *one;
    one = *stack_a;
    if ((one->next->value > one->value) && (one->next->value > one->next->next->value) && (one->value < one->next->next->value))
    {
        ft_reverse_rotate(stack_a);
        ft_swap_stack(stack_a);
        exit(EXIT_SUCCESS);
    }
    if ((one->value < one->next->next->value) && (one->next->value < one->next->next->value))
    {
        ft_swap_stack(stack_a);
        exit(EXIT_SUCCESS);
    }
    if ((one->value > one->next->value) && (one->value > one->next->next->value) && (one->next->value > one->next->next->value))
    {
        ft_rotate(stack_a);
        ft_swap_stack(stack_a);
        exit(EXIT_SUCCESS);
    }
    if ((one->value > one->next->value) && (one->value > one->next->next->value))
    
    {
        ft_rotate(stack_a);
        exit(EXIT_SUCCESS);
    }
    if ((one->value < one->next->value) && (one->value > one->next->next->value))
    {
        ft_reverse_rotate(stack_a);
        exit(EXIT_SUCCESS);
    }
    }
}

void assign_index (int *sorted, t_stack **stack)
{
    t_stack *temp;
    int count;

    count = 0;
    while (sorted[count])
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