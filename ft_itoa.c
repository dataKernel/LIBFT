/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:32:47 by lancelot          #+#    #+#             */
/*   Updated: 2022/04/26 17:41:41 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "libft.h"

static int	size_int(int n)
{
	int		i;

	i = 0;
	while (n > 0 || n < 0)
	{
		n /= 10;
		i++;
	}
	if (i == 0)
		i = 1;
	return (i);
}

static void	fill(char *str, int size_str, bool check_negative, unsigned int n)
{
	int		i;

	i = size_str - 1;
	str[i + 1] = '\0';
	while (i >= 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if (check_negative)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	unsigned int	pos_n;
	bool			check_negative;
	char			*str;
	int				size_str;

	check_negative = false;
	pos_n = (unsigned int) n;
	size_str = size_int(n);
	if (n < 0)
	{
		check_negative = true;
		pos_n = (unsigned int)n * -1;
		size_str += 1;
	}
	str = (char *)malloc(sizeof(char) * (size_str + 1));
	if (!str)
		return (NULL);
	fill(str, size_str, check_negative, pos_n);
	return (str);
}
