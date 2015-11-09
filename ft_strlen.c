#include <string.h>

size_t	ft_strlen(const char *s)
{
  size_t i;

  i = 0;
  if (s[i])
    while (s[i])
      i++;
  return (i);
}
