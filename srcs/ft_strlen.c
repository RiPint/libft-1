#include <string.h>

size_t	ft_strlen(char *s)
{
  size_t i;

  i = 0;
  if (s)
    while (s)
      i++;
  return (i);
}
