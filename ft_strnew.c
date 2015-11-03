#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
  char *str;

  if (!(str = (char *)malloc(sizeof(char) * size)))
    return (NULL);

  while (size)
      str[size--] = '\0';
  str[size] = '\0';
  return (str);
}

