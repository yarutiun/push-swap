/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:47:19 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/07 15:03:50 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void check_for_entry (char **argv)
{
    int count = 1;
    int k;
    // int minuses;
    int j;
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
            j = ft_atoi(argv[count]);
            ft_printf("%i\n", j);
            count ++;
        }
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