/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:25:59 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/14 14:27:48 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t			size_str_malloc;
	size_t			size_s1;
	size_t			size_s2;
	char			*str;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	size_str_malloc = size_s1 + size_s2 + 1;
	str = (char *)malloc(size_str_malloc * sizeof (char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, size_s1 + 1);
	ft_strlcpy(str + size_s1, s2, size_s2 + 1);
	return (str);
}
