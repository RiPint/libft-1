#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
  size_t i;
  size_t j;
  char *str;

  j = 0;
  i = 0;
  if (!(str = (char *)malloc(sizeof(char) * ft_lenbr(n))))
    return (NULL);
  if (n < 0)
    {
      i = -n;
      str[j++] = '-';
    }
  else
      i = n;
  while (i)
    {
      str[ft_lenbr(i)] = (i % 10) + 48;
      i = i / 10;
      j++;
    }
  if (n == 0)
    str[j++] = '0';
  str[j] = '\0';
  return (str);
}
