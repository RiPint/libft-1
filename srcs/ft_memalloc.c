#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
  void	*str;

  if (!(str = (void*)malloc(sizeof(char) * size)))
    return (NULL);
  str = ft_memset(str, 0, size);
  return (str);
}
