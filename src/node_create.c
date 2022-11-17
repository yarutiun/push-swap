/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:28:56 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/17 17:12:05 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

//allocates a stack and fills it with values
void allocate_and_fill_a(t_stack **head, int *val,int l)
{
    t_stack i;
    t_stack *temp;
    l++;
    i.counter = l - 1;
    int j = 0;
    
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
int len_of_list(t_stack **head)
{
    int count;
    count = 0;
    t_stack *temp;
    temp = *head;

    while (temp)
    {
        temp = temp->next;
        count ++;
    }
    return (count);
}
