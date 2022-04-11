/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:09:40 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/09 18:58:40 by lsaint-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char		*str1;
	char		*str2;
	size_t		i;
	int			result;

	str1 = (char *) s1;
	str2 = (char *) s2;
	i = 0;
	result = 0;
	while (i < n)
	{	
		if (str1[i] != str2[i])
		{
			result = (unsigned char)str1[i] - (unsigned char)str2[i];
			break ;
		}
		i++;
	}
	return (result);
}
