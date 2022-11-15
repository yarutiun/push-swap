/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:44:37 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/15 16:03:02 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void ft_swap_stack(t_stack **stack)
{
    t_stack *node1;
    t_stack *node2;
    int temp;
    node1 = *stack;
    node2 = *stack;
    node2 = node2->next;
    temp = node1->value;
    node1->value = node2->value;
    node2->value = temp;
    printf("sa\n");
}



// void	ft_rra(t_stack **stack_a)
// {
// 	// t_stack	*last;
// 	// t_stack	*tmp;

// 	// last = *stack_a;
// 	// tmp = *stack_a;
// 	// while (last->next != NULL)
// 	// {
// 	// 	tmp = last;
// 	// 	last = last->next;
// 	// }
// 	// last->next = *stack_a;
// 	// *stack_a = last;
// 	// tmp->next = NULL;
// 	// write(1, "rra\n", 4);
// }