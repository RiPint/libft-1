#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
  size_t i;

  i = ft_strlen(s);
  while (s[i] != c && i)
    i--;
  if (s[i] == c)
    return ((char *)&s[i]);
  else	if (s[ft_strlen(s)] == c)
    return ((char *)&s[i]);
  else
    return (NULL);
}
