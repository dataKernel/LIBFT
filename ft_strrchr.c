/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaint-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:14:07 by lsaint-l          #+#    #+#             */
/*   Updated: 2022/04/22 13:09:08 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		last_posi;
	int		i;

	last_posi = -1;
	ptr = (char *)s;
	i = 0;
	while (ptr[i])
	{	
		if (ptr[i] == (char)c)
			last_posi = i;
		i++;
	}
	if (ptr[i] == (char)c)
		return (ptr + i);
	if (last_posi >= 0)
		return (ptr + last_posi);
	else
		return (NULL);
}
