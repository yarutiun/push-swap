/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:22:23 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/06 21:48:47 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	unsigned int	i;
	unsigned int	size;

	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	dest = (char *) malloc(sizeof (*dest) * (size));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		dest[i++] = *s1++;
	}
	while (*s2 != '\0')
		dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}
