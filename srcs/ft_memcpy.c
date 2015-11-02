#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
  void *tmp;
  size_t i;

  i = -1;
  tmp = dst;
  while (++i < n)
    ((char *)dst)[i] = ((const char *)src)[i];
  return (tmp);
}
