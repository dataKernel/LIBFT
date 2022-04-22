/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:56:44 by lancelot          #+#    #+#             */
/*   Updated: 2022/04/18 13:24:06 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	check_first_index(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i++;
		}
		else
			j++;
	}
	return (i);
}

static int	check_last_index(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j] && i >= 0)
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i--;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		size_s1;	
	int		first_index;
	char	*copy;

	if (!s1 || !set)
		return (NULL);
	first_index = check_first_index(s1, set);
	size_s1 = check_last_index(s1 + first_index, set) + 1;
	copy = malloc(sizeof(char) * (size_s1 + 1));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s1 + first_index, size_s1 + 1);
	return (copy);
}
