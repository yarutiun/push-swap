/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:25:31 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/09 16:38:38 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*temo;

	i = 0;
	temo = (char *)haystack;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (temo[i] && i < len)
	{
		j = 0;
		while (temo[i + j] == needle[j] && len - i >= ft_strlen(needle))
		{
			if (needle[j + 1] == '\0')
			{
				return (&temo[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*в функции мы идем проверкой пока не найдем 
совместимость хайстека и нидла по одному символу
после мы ищем что бы нидл 
совпадал с хайстеком по остальным символам
если находим что нидл закончился то просто ретерним егo*/