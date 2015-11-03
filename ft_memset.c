#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *mem, int c, size_t n)
{
  size_t	i;

  i = -1;
  while (++i < n)
      ((char *)mem)[i] = (unsigned char)c;
  return (mem);
}
