/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:29:03 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/08 21:34:37 by lsaint-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char		*source;
	size_t			i;
	char			*destination;

	destination = dst;
	source = src;
	i = len - 1;
	if (dst > src)
	{
		while (i > 0)
		{
			destination[i] = source[i];
			i--;
		}
		destination[i] = source[i];
	}
	else
		ft_memcpy(dst, src, len);
	return (destination);
}