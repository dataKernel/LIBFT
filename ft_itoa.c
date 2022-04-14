/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:32:47 by lancelot          #+#    #+#             */
/*   Updated: 2022/04/14 11:53:03 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "libft.h"

static	int size_int(int n)
{
	int		i;

	i = 0;
	while(n > 0 || n < 0)
	{
		n /= 10;
		i++;
	}
	return(i);
}

char	*ft_itoa(int n)
{
	bool	check_negative;
	char	*str;
	int		size_str;
	int		i;
	
	size_str = size_int(n);
	if(n < 0)
	{
		check_negative = true;
		n *= -1;
		size_str += 1;
	}
	i = size_str - 1;
	str = (char *)malloc(sizeof(char) * (size_str + 1));
	if(!str)
		return(NULL);
	str[i] = '\0';
	while(i >= 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if(check_negative)
		str[0] = '-';
	return(str);
}
