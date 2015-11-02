#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{

  if (!s1 || !s2)
    return (0);
  while (n-- != 0)
    {
      if (*(const unsigned char *)s1 != *(const unsigned char *)s2)
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
      s1++;
      s2++;
    }
  return (0);
}
