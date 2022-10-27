/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:48:26 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/05 13:39:38 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <unistd.h>

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

void	sub_print_fd(int nb, int fd)
{
	int	comper;
	int	fnumber;

	comper = 1000000000;
	while (nb / comper < 1)
	{
		comper = comper / 10;
	}
	while (comper >= 1)
	{
		fnumber = nb / comper + 48;
		ft_putchar_fd(fnumber, fd);
		nb = nb - (nb / comper * comper);
		comper = comper / 10;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb > 2147483647 || nb < -2147483648)
	{
		return ;
	}
	if (nb == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	else if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (nb > 0)
	{
		sub_print_fd(nb, fd);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * (-1);
		sub_print_fd(nb, fd);
	}
}

// int		main(int argc, const char *argv[])
// {
// 	int		arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 		ft_putnbr_fd(0, 2);
// 	else if (arg == 2)
// 		ft_putnbr_fd(5, 1);
// 	else if (arg == 3)
// 		ft_putnbr_fd(-5, 2);
// 	else if (arg == 4)
// 		ft_putnbr_fd(42, 1);
// 	else if (arg == 5)
// 		ft_putnbr_fd(-57, 2);
// 	else if (arg == 6)
// 		ft_putnbr_fd(164189, 1);
// 	else if (arg == 7)
// 		ft_putnbr_fd(-987441, 2);
// 	else if (arg == 8)
// 		ft_putnbr_fd(2147483647, 1);
// 	else if (arg == 9)
// 		ft_putnbr_fd(-2147483648LL, 2);
// 	return (0);
// }