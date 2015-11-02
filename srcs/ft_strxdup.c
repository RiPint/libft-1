#include <stdlib.h>
#include <string.h>

char	*ft_strxdup(char const *s, size_t x, size_t y)
{
  size_t i;
  char *str;

  i = 0;
  x--;
  y--;
  if (!(str = (char *)malloc(sizeof(char) * y - x + 1)))
    return (NULL);
  while (x++ < y)
    str[i++] = s[x];
  str[i] = '\0';
  return (str);
}
