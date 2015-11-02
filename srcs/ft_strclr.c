#include "libft.h"

void	ft_strclr(char *str)
{
  str = ft_memset(str, 0 , ft_strlen(str));
}
