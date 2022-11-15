/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:24:01 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/15 16:51:29 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void print_err(char *msg)
{
    int i;
    i = 0;
    while(msg)
    {
        i ++;
    }
    write (2, msg, i);
}

void print_nodes(t_stack **head)
{
    t_stack *temp;
    temp = *head;

    while (temp)
    {
        printf("the value is: %i\n", temp->index);
        temp = temp->next;
    }
}

int	ft_strcmp(char *s1, char *s2)
{
	size_t	counter;

	counter = 0;
	while (s1[counter] != '\0' && s1[counter] == s2[counter])
	{
		counter++;
	}
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}

int	ft_isdigit_mod(int c)
{ 
	if ((c <= '9' && c >= '0'))
	{
		return (1);
	}
    if (c == '-')
    {
        return(2);
    }
	else
	{
		return (0);
	}
}

long int	ft_atoi_mod(const char *str)
{
	unsigned long int	num;
	int				i;
	int				ifminus;

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

void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}