/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:40:55 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/23 19:40:57 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *mem, int c, size_t n)
{
  size_t	i;

  i = -1;
  while (++i < n)
      ((char *)mem)[i] = (unsigned char)c;
  return (mem);
}
