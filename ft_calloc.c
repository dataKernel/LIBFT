/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:33:40 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/10 21:49:26 by lsaint-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	g_size;
	void	*init;

	g_size = size * count;
	init = malloc(g_size);
	if (!init)
		return (NULL);
	init = ft_memset(init, 0, g_size);
	return (init);
}
