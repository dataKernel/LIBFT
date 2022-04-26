/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:26:04 by lancelot          #+#    #+#             */
/*   Updated: 2022/04/24 01:07:59 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	get_words_nbr(const char *s, char c)
{
	int		result;
	int		i;

	result = 0;
	if (s[0] != c)
		result++;
	i = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			result ++;
		i++;
	}
	return (result);
}

static int	fill(char **ptr_array, const char *s, char c, int size_ptr_array)
{
	int		i;
	int		j;
	int		size_str;

	ptr_array[size_ptr_array] = NULL;
	i = 0;
	j = 0;
	while (i < size_ptr_array)
	{
		while (s[j] == c)
			j++;
		size_str = 0;
		while (s[size_str + j] != c && s[size_str + j] != '\0')
			size_str++;
		ptr_array[i] = (char *)malloc(size_str * sizeof(char) + 1);
		if (!ptr_array[i])
			return (-1);
		ft_strlcpy(ptr_array[i], s + j, size_str + 1);
		j += size_str + 1;
		i++;
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr_array;
	int		size_ptr_array;
	int		result;

	if (!s)
		return (NULL);
	size_ptr_array = get_words_nbr(s, c);
	ptr_array = (char **)malloc(size_ptr_array * (sizeof(char *) + 1));
	if (!ptr_array)
		return (NULL);
	result = fill(ptr_array, s, c, size_ptr_array);
	if (result == -1)
		return (NULL);
	return (ptr_array);
}
