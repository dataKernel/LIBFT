/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:38:23 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/11 12:52:37 by lsaint-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

static size_t	counter(char *str)
{
	size_t		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		counter_dst;

	i = 0;
	counter_dst = counter(dst);
	if (dstsize <= counter_dst)
		return (dstsize + counter((char *)src));
	while (src[i] != '\0' && i + counter_dst + 1 < (dstsize))
	{
		dst[i + counter_dst] = src[i];
		i++;
	}
	dst[i + counter_dst] = '\0';
	return (counter(dst) + counter ((char *)&src[i]));
}
