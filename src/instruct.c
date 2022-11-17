/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:44:37 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/17 12:43:41 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void ft_swap_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	tmp2 = tmp->next;
	*stack = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	write(1, "sa\n", 3);
	return ;
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