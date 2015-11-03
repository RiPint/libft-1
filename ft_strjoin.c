#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
  size_t i;
  size_t j;
  char *str;
  size_t k;

  k = 0;
  j = ft_strlen(s1) + ft_strlen(s2);
  if (!(str = (char *)malloc(sizeof(char) * j)))
    return (NULL);
  i = -1;
  while (++i < ft_strlen(s1))
       str[i] = s1[i];
   while (i < j && s2[k])
      str[i++] = s2[k++];
  str[i] = '\0';
  return (str);
}
