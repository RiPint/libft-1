#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
  size_t i;

  i = 0;
  while (*(unsigned char *) s != (unsigned char) c && *(unsigned char *)s && n--)
    s++;
  if (*(unsigned char *) s == '\0')
    return (NULL); 
  else if (n == 0)
    return ((void *)s);
  else 
    return (NULL);
}
