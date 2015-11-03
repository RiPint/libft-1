#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
  size_t i;

  i = -1;
  while (++i < n)
    {
      *(unsigned char *)dst++ = *(unsigned char *)src;
      if (*(unsigned char *)src++ == (unsigned char) c)
	return ((unsigned char *)dst);
    }
  return (NULL);
}
