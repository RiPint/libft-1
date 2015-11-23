/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:37:16 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/23 19:38:26 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
  size_t i;

  i = 0;
  if (c > 127 || c < 0)
    return (NULL);
  if (*(unsigned char *) s == (unsigned char) c)
    return ((void *)s);
  while (*(unsigned char *) s != (unsigned char) c && *(unsigned char *)s && n--)
    s++;
  if (*(unsigned char *) s == (unsigned char) c)
    return ((void *)s);
  if (*(unsigned char *) s == '\0')
    return (NULL);
  else if (n == 0)
    return ((void *)s);
  else
    return (NULL);
}
