/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:02:11 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/04 17:42:40 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*change;

	i = 0;
	change = (unsigned char *)s;
	while (i < n)
	{
		*change = '\0';
		change ++;
		i ++;
	}
}

// int		main(int argc, const char *argv[])
// {
// 	void	*mem;

// 	alarm(5);
// 	if (argc == 1 || !(mem = malloc(sizeof(*mem) * 5)))
// 		return (0);
// 	if (atoi(argv[1]) == 1)
// 	{
// 		memset(mem, 'e', 5);
// 		ft_bzero(mem, 5);
// 		write(1, mem, 5);
// 	}
// 	else if (atoi(argv[1]) == 2)
// 	{
// 		memset(mem, 'e', 5);
// 		ft_bzero(mem, 0);
// 		write(1, mem, 5);
// 	}
// 	return (0);
// }