#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
  void *dst;

  (if !(dst = (size_t)malloc(sizeof(size_t) * size) + 1))
	return (NULL);
  ft_memset(dst, 0, size);
	return (dst);
}
