/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:27:35 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/09 19:57:39 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char	*src1;
	unsigned char	*dest1;
	unsigned int	counter;

	counter = 0;
	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	if (dest1 == NULL && src1 == NULL)
	{
		return (dest);
	}
	while (counter < n)
	{
		dest1[counter] = src1[counter];
		counter ++;
	}
	return (dest);
}

// int main (void){

// char b[100] = "iwuherjweiorj";
// char a[100];
// ft_memcpy(a, b, 13);
// write (1, a, 13);
// write(1, "\n", 1);
// write (1, b, 13);

// return 0;
// }