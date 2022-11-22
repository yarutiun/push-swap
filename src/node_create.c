/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:28:56 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/22 18:11:28 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//allocates a stack and fills it with values
void	allocate_and_fill_a(t_stack **head, int *val, int l)
{
	t_stack	i;
	t_stack	*temp;
	int		j;

	j = 0;
	l ++;
	i.counter = l - 1;
	while (j < l)
	{
		temp = malloc(sizeof(t_stack));
		temp->value = val[i.counter];
		temp->next = *head;
		*head = temp;
		i.counter--;
		l--;
	}
}

//returns length of list
int	len_of_list(t_stack **lst)
{
	t_stack	*node;
	int		len;

	node = *lst;
	len = 0;
	if (!lst || !(*lst))
		return (0);
	while (node->next != NULL)
	{
		node = node->next;
		len ++;
	}
	len ++;
	return (len);
}

void	all_check(char **argv, int argc)
{
	int	if_dup;
	int	a;

	if (argc <= 2)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	if (max_min_check(argv) == 0)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	if_dup = check_dup(argv);
	if (if_dup == 0)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	a = if_sorted(argv);
	if (a == 1)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
}
