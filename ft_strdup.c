/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:15:18 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/18 13:25:09 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	size_s1;

	size_s1 = ft_strlen(s1);
	copy = (char *)malloc(size_s1 + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, size_s1 + 1);
	return (copy);
}
