/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:09:38 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/07 15:06:24 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push-swap.h"

int main (int argc, char **argv)
{
    if (argc)
    {}
    int if_dup;
    int a;
    if_dup = check_dup(argv);
    if (if_dup == 0)
        exit(0);
    check_for_entry(argv);
    a = if_sorted(argv);
    return (0);
}
