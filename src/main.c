/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:09:38 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/16 19:08:23 by yarutiun         ###   ########.fr       */
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
    print_nodes(&stack_a);
    // ft_pb(&stack_a, &stack_b);
    // put_to_b(&stack_a, &stack_b);
    // ft_pb(&stack_a, &stack_b);
    print_nodes(&stack_b);
    // print_nodes(&stack_b);
    return (0);
}
