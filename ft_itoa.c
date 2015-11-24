/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:36:15 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/24 17:27:06 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	size_t i;
	size_t j;
	char *str;

	j = 0;
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * ft_lenbr(n))))
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		i = -n;
		str[j++] = '-';
	}
	else
		i = n;
	while (i)
	{
		if (n >= 0)
			str[ft_lenbr(i) - 1] = (i % 10) + 48;
		else
			str[ft_lenbr(i)] = (i % 10) + 48;
		i = i / 10;
		j++;
	}
	if (n == 0)
		str[j++] = '0';
	str[j] = '\0';
	return (str);
}
