/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:18:16 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/21 11:08:40 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t		malloc_size_str;
	size_t		size_s;
	char		*str;

	if (!s)
		return (NULL);
	size_s = ft_strlen(s);
	if (start >= size_s)
	{
		malloc_size_str = 1;
		start = size_s;
	}
	else
		malloc_size_str = (len + 1) * sizeof(char);
	str = (char *)malloc(malloc_size_str);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, malloc_size_str);
	return (str);
}
