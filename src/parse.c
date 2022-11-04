/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:47:19 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/04 15:52:50 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

void check_for_entry (char **argv)
{
    static int i;
    int count = 1;
    // int minuses;
    int j;
    // minuses = 0;
        while (argv[count])
        {
        int k = 0;
            while (argv[count][k])
            {
                if (ft_isdigit_mod(argv[count][k]) == 0)
                    exit(EXIT_FAILURE);
                k++;
            }
            count++;
        }
        if (max_min_check(argv) == 0)
        {
            exit(EXIT_FAILURE);
        }
        else
        {
            j = ft_atoi(argv[i+1]);
            ft_printf("%i\n", j);
            i++;
        }
}
//returns 1 if No duplicates
int check_dup(char **argv)
{
    int i;
    i = 1;
    int len;
    while (argv[i])
    {
        len = ft_strlen(argv[i + 1]);
        if (len != 0)
            {
            if (ft_strcmp(argv[i], argv[i + 1]) == 0)
                return (0);
            len = 0; 
            }
            i++;
    }
    return (1);
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
    }
    return (1);
}

