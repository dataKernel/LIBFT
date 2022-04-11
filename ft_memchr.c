/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:54:57 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/07 21:38:29 by lsaint-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		value;
	unsigned char		*component;

	if (!s)
		return (NULL);
	i = 0;
	value = (unsigned char) c;
	component = (unsigned char *) s;
	while (i < n)
	{
		if (component[i] == value)
			return (component + i);
		i++;
	}
	return (NULL);
}
