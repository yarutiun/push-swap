/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:08:14 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/22 17:10:48 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//same atoi but passes biger numbers
long int	ft_atoi_mod(const char *str)
{
	unsigned long int	num;
	int					i;
	int					ifminus;

	ifminus = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || \
		str[i] == '\r' || str[i] == '\n' || \
		str[i] == '\v' )
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			ifminus = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((long int)(ifminus * num));
}

t_stack	*lst_lstlast(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
		{
			return (tmp);
		}
	}
	return (tmp);
}

//just swaps values
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	find_absolute_value(int a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

void	free_list(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
