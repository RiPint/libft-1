#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{

  size_t i;
  size_t j;
  size_t k;

  if (!(src) || !(dst))
    return (0);
  i = 0;
  j = 0;
  k = ft_strlen(dst) + ft_strlen(src);
  while (dst[i] && i < size && ft_strlen(src) > 1)
    i++;
  while (src[j] && ft_strlen(src) > 1)
    dst[i++] = src[j++];
  if (j > 0)
    dst[i] = '\0';
  return (ft_strlen(src) + i - j);
}
