/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intructions_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:13:20 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/11 17:31:03 by yarutiun         ###   ########.fr       */
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