#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
  char *str;
  size_t i;

  i = 0;
  str = (char *)malloc(sizeof(char) * ft_strlen(s));

  if (str)
    {
      while (s[i])
	{
	  str[i] = f(s[i]);
	  i++;
	}
      str[i] = '\0';
    }
  return (str);
}
