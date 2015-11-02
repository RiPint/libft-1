#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
  size_t i;
  char *str;
  size_t j;

  j = start;
  i = 0;
  if (!(str = (char *)malloc(sizeof(char) * len)))
    return (NULL);
  while (start < len + j)
    str[i++] = s[start++];
  str[i] = '\0';
  return (str);
}
