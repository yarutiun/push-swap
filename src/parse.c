/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:47:19 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/15 15:59:50 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

int *check_for_entry (char **argv, int argc)
{
    int count = 1;
    int k;
    int i = 0;
    // int minuses;
    int *q;
    q = (int *)malloc(sizeof(int) * (argc-1));
    // minuses = 0;
        while (argv[count])
        {
        k = 0;
            while (argv[count][k])
            {
                if (ft_isdigit_mod(argv[count][k]) == 0)
                    exit(EXIT_FAILURE);
                k++;
            }
            count++;
        }
        count = 1;
        if (max_min_check(argv) == 0)
        {
            exit(EXIT_FAILURE);
        }
        while (argv[count])
        {
            q[i] = ft_atoi(argv[count]);
            // ft_printf("%i\n", q[i]);
            i++;
            count ++;
        }
        return(q);
}
int max_min_check (char **argv)
{
    int i;
    long int atoied;
    // int j;
    i = 1;
    while (argv[i])
    {
        atoied = ft_atoi_mod(argv[i]);
        if (atoied == 0 || atoied < INT_MIN || atoied > INT_MAX)
        {
            ft_printf("Error");
            return (0);
        }
        atoied = 0;
        i ++;
    }
    return (1);
}

//returns 1 if No duplicates
int check_dup(char **argv)
{
    int i;
    i = 1;
    int j;
    int len;
    j = 2;
    while (argv[i])
    {
        while (argv[j])
        {
        len = ft_strlen(argv[i + 1]);
        if (len != 0)
            {
            if (ft_strcmp(argv[i], argv[j]) == 0)
                return (0);
            len = 0; 
            }
            j++;
        }
        i++;
        j = i + 1;
    }
    return (1);
}

int if_sorted (char **argv)
{
    int i;
    int first;
    int second;
    i = 1;
    while (argv[i])
    {
        if (!argv[i+1])
            break;
        first = ft_atoi_mod(argv[i]);
        second = ft_atoi_mod(argv[i+1]);
        if (first < second)
        {
            i++;
        }
        else
        return (0);
        
    }
    return (1);
}

int *sort_bubble_index(int *values, int argc)
{
    int i;
    int j;
    i = 0;
    int *sort;
    sort = (int *)malloc(sizeof(int) * (argc-1));
    sort = values;
    while(i < argc - 2)
    {
    j = 0;
        while(j < argc - 2)
        {
            if (sort[j] > sort[j + 1])
                ft_swap(&sort[j], &sort[j + 1]);
        j++;
        }
    i++;
    }
    return (sort);
}