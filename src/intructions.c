/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intructions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:13:20 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/22 18:17:42 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_rotate_a(t_stack **stack_a, int flag)
{
	t_stack	*last;
	t_stack	*head;

	if (!stack_a || !(*stack_a))
		return ;
	if ((*stack_a)->next == NULL)
		return ;
	head = *stack_a;
	last = lst_lstlast(*stack_a);
	*stack_a = head->next;
	head->next = NULL;
	last->next = head;
	if (flag == 1)
		ft_printf("ra\n");
}

void	ft_rotate_b(t_stack **stack_b, int flag)
{
	t_stack	*last;
	t_stack	*head;

	if (!stack_b || !(*stack_b))
		return ;
	if ((*stack_b)->next == NULL)
		return ;
	head = *stack_b;
	last = lst_lstlast(*stack_b);
	*stack_b = head->next;
	head->next = NULL;
	last->next = head;
	if (flag == 1)
		ft_printf("rb\n");
}

void	ft_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate_a(stack_a, 0);
	ft_rotate_b(stack_b, 0);
	ft_printf("rr\n");
}

void	ft_reverse_rotate_a(t_stack **stack_a, int flag)
{
	t_stack	*last;
	t_stack	*tt;

	if (!(*stack_a) || !stack_a)
		return ;
	tt = *stack_a;
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
	last -> next = *stack_a;
	*stack_a = last;
	if (flag == 1)
		ft_printf("rra\n");
}
