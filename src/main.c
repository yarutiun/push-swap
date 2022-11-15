/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:09:38 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/15 16:55:24 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

int main (int argc, char **argv)
{
    int a;
    int if_dup;
    t_stack *stack_a;
    stack_a = malloc(sizeof(t_stack));
    stack_a = NULL;
    int *q;
    int *sorted;
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
    // print_nodes(&stack_a);
    // sort_three(&stack_a);
    sorted = sort_bubble_index(q, argc);
    assign_index (sorted, &stack_a);
    // print_nodes(&stack_a);
    return (0);
}
