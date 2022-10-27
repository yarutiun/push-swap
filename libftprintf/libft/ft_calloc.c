/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:44:21 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/11 18:54:57 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	calc_bytes;

	calc_bytes = (count * size);
	if (count != 0 && (calc_bytes / count) != size)
	{
		return (NULL);
	}
	p = malloc(calc_bytes);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(p, calc_bytes);
		return (p);
	}
}
//first if is made because of the max int overlapping
