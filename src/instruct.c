/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:44:37 by yarutiun          #+#    #+#             */
/*   Updated: 2022/10/27 13:48:26 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void ft_sa(t_stack **stack_a)
{
    t_stack *node1;
    t_stack *node2;
    int temp;
    node1 = *stack_a;
    node1 = node1->next;
    node2 = *stack_a;
    node2 = node2->next->next;
    temp = node1->value;
    node1->value = node2->value;
    node2->value = temp;
}

void ft_sb(t_stack **stack_b)
{
    t_stack *node1;
    t_stack *node2;
    int temp;
    node1 = *stack_b;
    node1 = node1->next;
    node2 = *stack_b;
    node2 = node2->next->next;
    temp = node1->value;
    node1->value = node2->value;
    node2->value = temp;
}

void ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
	return ;
}