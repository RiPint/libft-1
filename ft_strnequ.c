/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:48:28 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/29 15:18:07 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;
	size_t	j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[j] == s2[j] && s1[j] && s2[j] && j < n)
		j++;
	i = j;
	if (s1[j] != s2[j] && j < n)
		return (0);
	return (1);
}
