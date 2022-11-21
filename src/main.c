/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:09:38 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/21 15:05:42 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

int main (int argc, char **argv)
{
    int a;
    int if_dup;
    t_stack *stack_a;
    t_stack *stack_b;
    stack_a = NULL;
    stack_b = NULL;
    if (argc <= 2)
    {
        write(2, "Error\n", 6);
        return(0);
    }
    int *q;
    int *sorted;
    if_dup = check_dup(argv);
    if (if_dup == 0)
    {
        write(2, "Error\n", 6);
        return(0);
    }
    q = check_for_entry(argv, argc);
    a = if_sorted(argv);
    if (a == 1)
    {
        write(2, "Error\n", 6);
        return(0);
    }
    allocate_and_fill_a(&stack_a, q, argc-2);
    sorted = sort_bubble_index(q, argc);
    if (argc == 3 && stack_a->next > stack_a->next->next)
    {
        ft_swap_stack(&stack_a);
        return(0);
    }
    if (argc == 4)
    {
        sort_three(&stack_a);
        return(0);
    }
    assign_index(sorted, &stack_a, argc);
    // print_nodes_index(&stack_a);
    sort_5_100(&stack_a, &stack_b);
    // print_nodes_index(&stack_a);
    // print_nodes_val(&stack_a);
    freeList(stack_a);
    free(q);
    return (0);
}
