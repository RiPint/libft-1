/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:49:39 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/29 15:18:26 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	j;

	j = start;
	i = 0;
	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	while (start < len + j)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
