#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
  size_t size;

  size = 0;
  while (src[size] && size < n)
    {
      dest[size] = src[size];
      size++;
    }
  while (size < n)
    {
      dest[size] = '\0';
      size++;
    }
  return (dest);
}
