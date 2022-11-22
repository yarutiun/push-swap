/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:09:38 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/22 18:13:21 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*q;
	int		*sorted;

	stack_a = NULL;
	all_check(argv, argc);
	q = check_for_entry(argv, argc);
	allocate_and_fill_a(&stack_a, q, argc - 2);
	sorted = sort_bubble_index(q, argc);
	if (argc == 3 && stack_a->next > stack_a->next->next)
	{
		ft_swap_stack(&stack_a);
		return (0);
	}
	if (argc == 4)
	{
		sort_three_one(&stack_a);
		return (0);
	}
	assign_index(sorted, &stack_a, argc);
	sort_5_100(&stack_a, &stack_b);
	free_list(stack_a);
	free(q);
	return (0);
}
