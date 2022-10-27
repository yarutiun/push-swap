/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:52:06 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/06 21:58:53 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	o;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (0);
	o = ft_strlen(s);
	str = ((char *)malloc(sizeof(char) * (o + 1)));
	if (!str)
		return (0);
	while (i < o)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
