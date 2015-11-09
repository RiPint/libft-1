#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
  size_t size;
  char *str;

  size = ft_strlen(s1);
  if (!(str = (char*)malloc(sizeof(char) * size + 1)))
    return (NULL);
  str = ft_strcpy(str, s1);
  return (str);
}
