/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:26:26 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/09 19:05:18 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_print_result(int n)
// {
// 	char c;

// 	if (n >= 10)
// 		ft_print_result(n / 10);
// 	c = n % 10 + '0';
// 	write (1, &c, 1);
// }

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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	length;

	length = ft_strlen(src);
	if (!dst)
	{
		return (length);
	}
	count = 0;
	if (dstsize > 0)
	{
		while ((src[count] != '\0') && (count < (dstsize - 1)))
		{
			dst[count] = src[count];
			count++;
		}
		if (dstsize > 0)
		{
		dst[count] = '\0';
		}
	}
	return (length);
}
// int		main(int argc, const char *argv[])
// {
// 	char	*dest;
// 	int		arg;

// 	alarm(5);
// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)) || argc == 1)
// 		return (0);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		ft_print_result(ft_strlcpy(dest, "lorem", 15));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// 	else if (atoi(argv[1]) == 2)
// 	{
// 		ft_print_result(ft_strlcpy(dest, "", 15));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// 	else if (atoi(argv[1]) == 3)
// 	{
// 		ft_print_result(ft_strlcpy(dest, "lorem ipsum", 3));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// 	else if (atoi(argv[1]) == 4)
// 	{
// 		ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// 	else if (atoi(argv[1]) == 5)
// 	{
// 		ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// 	return (0);
// }
