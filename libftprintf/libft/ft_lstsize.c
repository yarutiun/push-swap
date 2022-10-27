/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:48:03 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/10 15:23:07 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*current_node;

	current_node = NULL;
	current_node = lst;
	counter = 0;
	while (current_node != NULL)
	{
		counter ++;
		current_node = current_node->next;
	}
	return (counter);
}
