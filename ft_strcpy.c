#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
  size_t size;

  size = 0;
  while (src[size])
    {
      dest[size] = src[size];
      size++;
    }
  dest[size] = '\0';
  return (dest);
}
