/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:45:57 by lancelot          #+#    #+#             */
/*   Updated: 2022/04/18 12:10:59 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
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

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	pos_n;
	bool			check_negative;
	char			str[12];
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
	fill(str, size_str, check_negative, pos_n);
	ft_putstr_fd(str, fd);
}
