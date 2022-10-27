/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:28:56 by yarutiun          #+#    #+#             */
/*   Updated: 2022/10/27 15:33:14 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void allocate_and_fill_a(t_stack **head, int *val,int l)
{
    t_stack i;
    t_stack *temp;
    i.counter = 0;
    i.len = 0;
    int j = 0;

    
    while (j < l)
    {
        temp = malloc(sizeof(t_stack));
        temp->value = val[i.counter];
        temp->next = *head;
        *head = temp;
        i.counter++;
        j++;
    }
    
}

int len_of_list(t_stack **head)
{
    int count;
    count = 0;
    t_stack *temp;
    temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
        count ++;
    }
    count ++;
    return (count);
}
