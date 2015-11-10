#include <string.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
  
  size_t i;
  size_t j;
  
  if (!(src) || !(dst))
    return (0);
  i = 0;
  j = ft_strlen(dst);
  if (size < j)
    return (size + j);
  while (src[i] && j + i + 1 < size)
    {
      dst[j + i] = src[i];
      i++;
    }
  return (j + ft_strlen((char *)src));
}
