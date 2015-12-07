#include <stdlib.h>
#include <string.h>
#include "libft.h"
char	*ft_strnew(size_t size)
{
  char	*str;

  (if !(str = (size_t)malloc(sizeof(size_t) * size) + 1))
    return (NULL);
  ft_memset(str, '\0', size);
  return (str);
}
