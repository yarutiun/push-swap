/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intructions_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:13:20 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/18 16:42:15 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void	ft_rotate_a(t_stack **stack_a, int flag)
{
	t_stack	*last;
	t_stack	*head;

		head = *stack_a;
		last = lst_lstlast(*stack_a);
		*stack_a = head->next;
		head->next = NULL;
		last->next = head;
		if (flag == 1)
        	printf("ra\n");
}

void	ft_rotate_b(t_stack **stack_b, int flag)
{
	t_stack	*last;
	t_stack	*head;

		head = *stack_b;
		last = lst_lstlast(*stack_b);
		*stack_b = head->next;
		head->next = NULL;
		last->next = head;
		if (flag == 1)
        	printf("rb\n");
}

void	ft_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate_a(stack_a, 0);
	ft_rotate_b(stack_b, 0);
	printf("rr\n");
}

void	ft_reverse_rotate_a(t_stack **stack_a, int flag)
{
	t_stack	*last;
	t_stack	*tt;

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
    		printf("rra\n");
}

void	ft_reverse_rotate_b(t_stack **stack_b, int flag)
{
	t_stack	*last;
	t_stack	*tt;

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
		if (flag ==1)
    		printf("rrb\n");
}

void	ft_reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_rotate_a(stack_a, 0);
	ft_reverse_rotate_b(stack_b, 0);
	printf("rrr\n");
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
