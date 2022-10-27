/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:09:38 by yarutiun          #+#    #+#             */
/*   Updated: 2022/10/27 15:35:16 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

int main (void)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int i;
    stack_a = malloc(sizeof(t_stack));
    stack_a = NULL;
    stack_b = malloc(sizeof(t_stack));
    stack_b = NULL;
    int val[5] = {1, 2, 3, 4, 5};
    int a = (sizeof(val)/sizeof(*val));
    // printf ("%i", a);
    allocate_and_fill_a(&stack_a, val,a);
    // ft_sa(&stack_a);
    print_nodes(&stack_a);
    return (0);
}