/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:23:14 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/07 21:36:42 by lsaint-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				result;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	result = 0;
	while (i < n)
	{
		if (str1[i] != str2[i] || str1[i] == '\0')
		{
			result = str1[i] - str2[i];
			break ;
		}
		i++;
	}
	if (result > 0)
		result = 1;
	else if (result < 0)
		result = -1;
	return (result);
}
