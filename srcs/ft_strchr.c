#include <string.h>

char	*ft_strchr(const char *s, int c)
{
  size_t i;

  i = 0;
  while (s[i] != c)
    i++;
  if (s[i] == c)
    return ((char *)&s[i]);
  else
    return (NULL);
}
