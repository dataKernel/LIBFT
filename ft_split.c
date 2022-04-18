/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:26:04 by lancelot          #+#    #+#             */
/*   Updated: 2022/04/17 21:14:05 by lancelot         ###   ########.fr       */
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
	if(s[0] != c)
		result++;
	i = 0;
	if(!s[i])
		return 0;
	while(s[i])
	{	
		if(s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			result ++;
		i++;
	}
	return(result);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr_array;
	int		size_ptr_array;
	int		size_str;
	int		i;
	int		j;
		
	if(!s)
		return(NULL);
	i = 0;
	size_ptr_array = get_words_nbr(s, c);
	//the array of ptr array
	ptr_array = (char **)malloc(size_ptr_array * (sizeof(char *) + 1));
	if(!ptr_array)
		return(NULL);
	ptr_array[size_ptr_array] = NULL;
	j = 0;
	while(i < size_ptr_array)
	{
		while(s[j] == c)
			j++;
		size_str = 0;
		while(s[size_str + j] != c && s[size_str + j] != '\0')
			size_str++;
		ptr_array[i] = (char *)malloc(size_str * sizeof(char) + 1);
		if(!ptr_array[i])
			return(NULL);
		ft_strlcpy(ptr_array[i], s + j, size_str + 1);
		j += size_str + 1;
		i++;
	}
	return(ptr_array);
}
