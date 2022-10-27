/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:39:31 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/05 13:58:09 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned char *) src;
	if (dst == src || len == 0 || !dst || !src)
	{
		return (dst);
	}
	if (temp_src > temp_dst)
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
	while (len > 0)
	{
		temp_dst[len - 1] = temp_src[len - 1];
		len--;
	}
	return (dst);
}
