#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
  size_t i;
  size_t j;
  char	*str;

  i = 0;
  j = start;
  if (!(str = (char *)malloc(sizeof(char) * len) + 1))
    return (NULL);
  while (s[j] && i < len)
  {
    str[i] = s[j];
    i++;
    j++;
  }
  return (str);
}
