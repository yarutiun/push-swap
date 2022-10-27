/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:43:49 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/05 13:40:09 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strcpy(char *dst, const char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 	dst[i] = src[i];
// 	i++;
// 	}
// 	dst[i] = '\0';
// 	return (dst);
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

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		a;

	a = ft_strlen(s1);
	s2 = (char *) malloc(a + 1);
	if (s1 == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_strcpy(s2, s1);
		return (s2);
	}
}

// int		main(int argc, const char *argv[])
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char	*str_dup;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	if (atoi(argv[1]) == 1)
// 	{
// 		if (!(str_dup = ft_strdup(str)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str_dup);
// 		if (str_dup == str)
// 			ft_print_result("\nstr_dup's adress == str's adress");
// 	}
// 	return (0);
// }
