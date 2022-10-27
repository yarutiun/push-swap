/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:51:34 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/04 22:40:27 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

// int		main(int argc, const char *argv[])
// {
// 	char		*str;
// 	char		str2[] = "bonjour";
// 	int			arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (!(str = ft_strchr(str2, 'b')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str2)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	else if (arg == 2)
// 	{
// 		if (!(str = ft_strchr(str2, 'o')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str2 + 1)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	else if (arg == 3)
// 	{
// 		if (!(str = ft_strchr(str2, 'j')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str2 + 3)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	else if (arg == 4)
// 	{
// 		if (!(str = ft_strchr(str2, 's')))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 5)
// 	{
// 		if (!(str = ft_strchr(str2, '\0')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str2 + 7)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	else if (arg == 6)
// 	{
// 		char	str3[] = "";
// 		if (!(str = ft_strchr(str3, '\0')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str3)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	return (0);
// }

// int main (void)
// {
// 	const char *str = "qwert";
// 	strchr(str, 101);
// 	return 0;
// }