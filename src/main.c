/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:09:38 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/04 15:07:11 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

int main (int argc, char **argv)
{
    if (argc > 1 && argc < 500 && argv)
    {
        
    }
    int if_dup;
    int i = 1;
    // t_stack *stack_a;
    // stack_a = malloc(sizeof(t_stack));
    // stack_a = NULL;
    // int val[5] = {3, 2, 1};
    // int a = 5;
    // printf ("uweagfuywe");
    // allocate_and_fill_a(&stack_a, val ,a);
    // // ft_ra(&stack_a);
    // ft_sa(&stack_a);
    // print_nodes(&stack_a);
    if_dup = check_dup(argv);
    if (if_dup == 0)
        exit(0);

    while (i < argc)
    {
    check_for_entry(argv);
    i++;
    }
    return (0);
}
