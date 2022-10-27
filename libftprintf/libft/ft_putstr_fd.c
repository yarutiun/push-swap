/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:35:23 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/05 13:40:23 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <unistd.h>
// int	ft_strlen(const char *s)
// {
// 	int	counter;

// 	counter = 0;
// 	while (s[counter] != '\0')
// 	{
// 		counter ++;
// 	}
// 	return (counter);
// }

void	ft_putstr_fd(char *s, int fd)
{
	int	a;

	a = ft_strlen(s);
	write(fd, s, a);
}

// int		main(int argc, const char *argv[])
// {
// 	int		arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 		ft_putstr_fd("lorem ipsum dolor sit amet", 2);
// 	else if (arg == 2)
// 		ft_putstr_fd("  lorem\nipsum\rdolor\tsit amet  ", 1);
// 	else if (arg == 3)
// 		ft_putstr_fd("", 2);
// 	else if (arg == 4)
// 		ft_putstr_fd("lorem ipsum do\0lor sit amet", 1);
// 	return (0);
// }
