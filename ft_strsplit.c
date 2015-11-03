#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
  size_t i;
  size_t j;
  size_t x;
  size_t y;
  char **str;

  x = 0;
  y = 0;
  i = 0;
  j = ft_line_count(s, c);
  if (!(str = (char **)malloc(sizeof(char *) * j)))
    return (NULL);
  while (i < j)
    {
      x = y;
      while (s[x] == c && s[x++])
	  y = x;
      while (s[y] != c && s[y])
	  y++;
      str[i] = ft_strxdup(s, x, y);
      i++;
      while (s[y] == c)
	y++;
    }
  return (str);
}