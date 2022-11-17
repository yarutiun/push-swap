/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:09:38 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/17 15:55:16 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

int main (int argc, char **argv)
{
    int a;
    int if_dup;
    t_stack *stack_a;
    t_stack *stack_b;
    stack_a = malloc(sizeof(t_stack));
    stack_a = NULL;
    stack_b = malloc(sizeof(t_stack));
    stack_b = NULL;
    int *q;
    // int *sorted;
    if_dup = check_dup(argv);
    if (if_dup == 0)
        exit(0);
    q = check_for_entry(argv, argc);
    a = if_sorted(argv);
    if (a == 1)
    {
        printf("sorted");
        return(0);
    }
    allocate_and_fill_a(&stack_a, q, argc-2);
    // sorted = sort_bubble_index(q, argc);
    // assign_index (sorted, &stack_a);
    // ft_pb(&stack_a, &stack_b);
    sort_5_100(&stack_a, &stack_b);
    // put_to_b(&stack_a, &stack_b);
    // ft_pb(&stack_a, &stack_b);
    // print_nodes_val(&stack_a);
    // set_positions(&stack_a, &stack_b);
    // print_nodes_pos(&stack_a);
    // printf("\n");
    // print_nodes_pos(&stack_b);
    return (0);
}
