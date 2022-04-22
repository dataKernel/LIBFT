/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:32:48 by lancelot          #+#    #+#             */
/*   Updated: 2022/04/22 14:36:36 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		size_str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	size_str = ft_strlen(s);
	str = (char *)malloc((sizeof(char) * size_str) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	toto(unsigned int i, char c)
{
	return ('l');
}

int		main(void)
{
	char	(*func_ptr)(unsigned int, char);

	func_ptr = &toto;
	printf("%s", ft_strmapi("lancelot", func_ptr));
	return(0);
}
*/
