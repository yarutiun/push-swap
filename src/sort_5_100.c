/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:34:36 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/16 19:08:03 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

// void sort_5_100(t_stack **stack_a, t_stack **stack_b)
// {
    
// }

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
