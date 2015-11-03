#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *str;
  unsigned int i;

  i = 0;
  str = (char *)malloc(sizeof(char) * ft_strlen(s));
  if (str)
    {
      while (s[i])
	{
	  str[i] = f(i, s[i]);
	  i++;
	}
      str[i] = '\0';
    }
  return (str);
}
