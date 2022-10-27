/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:24:01 by yarutiun          #+#    #+#             */
/*   Updated: 2022/10/27 15:27:11 by yarutiun         ###   ########.fr       */
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

    while (temp->next != NULL)
    {
        printf("the value is: %i\n", temp->value);
        temp = temp->next;
    }
    if(temp)
    {
        printf("the value is: %i\n", temp->value);
    }
}