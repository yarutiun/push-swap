/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:09:38 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/10 17:56:29 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

int main (int argc, char **argv)
{
    if (argc)
    {}
    int if_dup;
    t_stack *stack_a;
    stack_a = malloc(sizeof(t_stack));
    int *q;
    if_dup = check_dup(argv);
    if (if_dup == 0)
        exit(0);
    q = check_for_entry(argv);
    allocate_and_fill_a(&stack_a, q, 3);
    print_nodes(&stack_a);
    ft_sa(&stack_a);
    print_nodes(&stack_a);
    // a = if_sorted(argv);
    return (0);
}
