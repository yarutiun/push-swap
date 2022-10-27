/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:33:01 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/05 13:39:30 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	ft_putendl_fd(char *s, int fd)
{
	int	a;

	a = ft_strlen(s);
	write(fd, s, a);
	write(fd, "\n", 1);
}
