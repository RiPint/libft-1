/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:40:44 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/24 17:32:47 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *cp_src;
	char *cp_dst;
	const char *cp;

	i = 0;
	cp_dst = dst;
	cp = src;
	cp_src = (char *)malloc(sizeof(char) * len);

	while (i < len)
	{
		cp_src[i] = cp[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		cp_dst[i] = cp_src[i];
		i++;
	}
	free(cp_src);
	return (dst);
}
