/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:15:36 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/22 18:19:06 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_reverse_rotate_b(t_stack **stack_b, int flag)
{
	t_stack	*last;
	t_stack	*tt;

	if (!(*stack_b) || !stack_b)
		return ;
	tt = *stack_b;
		last = lst_lstlast(tt);
	while (tt)
	{
		if (!tt->next->next)
		{
			tt->next = NULL;
			break ;
		}
		tt = tt->next;
	}
	last -> next = *stack_b;
	*stack_b = last;
	if (flag == 1)
		ft_printf("rrb\n");
}

void	ft_reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_rotate_a(stack_a, 0);
	ft_reverse_rotate_b(stack_b, 0);
	ft_printf("rrr\n");
}

void	ft_pa(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*tmp;

	if (!(*stack_b) || !stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	write(1, "pa\n", 3);
	return ;
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	write(1, "pb\n", 3);
	return ;
}

void	ft_swap_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!stack || !(*stack))
		return ;
	if ((*stack)->next == NULL)
		return ;
	tmp = *stack;
	tmp2 = tmp->next;
	*stack = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	write(1, "sa\n", 3);
	return ;
}
