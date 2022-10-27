/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:19:06 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/09 19:29:35 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			counter;
	unsigned char	charact;

	counter = 0;
	str = (unsigned char *)s;
	charact = (unsigned char)c;
	while (counter < n)
	{
		if (*str == charact)
		{
			return (str);
		}
		str ++;
		counter ++;
	}
	return (NULL);
}
