/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:10:09 by lancelot          #+#    #+#             */
/*   Updated: 2022/04/22 12:10:08 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*current;

	if (lst)
	{
		if (*lst)
		{
			current = *lst;
			while (current->next)
				current = current->next;
			current->next = new;
		}
		else
			*lst = new;
	}
}
