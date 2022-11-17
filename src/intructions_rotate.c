/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intructions_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:13:20 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/17 16:53:24 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void	ft_rotate(t_stack **mystack)
{
	t_stack	*last;
	t_stack	*head;

		head = *mystack;
		last = lst_lstlast(*mystack);
		*mystack = head->next;
		head->next = NULL;
		last->next = head;
        printf("ra\n");
}

void	ft_reverse_rotate(t_stack **mystack)
{
	t_stack	*last;
	t_stack	*tt;

	tt = *mystack;

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
		last -> next = *mystack;
		*mystack = last;
    printf("rra\n");
}

void	ft_pa(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*tmp;

	if (*stack_b == NULL)
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
