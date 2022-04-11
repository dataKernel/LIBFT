/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:17:00 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/10 16:31:17 by lsaint-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*component;
	unsigned char	value;

	if (!b)
		return (NULL);
	component = b;
	value = c;
	i = 0;
	while (i < len)
	{
		component[i] = value;
		i++;
	}
	return (b);
}
