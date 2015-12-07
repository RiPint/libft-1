#include <stdlib.h>
#include <libft.h>

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  int i;

  i = 0;
  str = NULL;
  (if !(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
    return NULL;
  while (s[i])
  {
    str[i] = f(i, &(s[i]));
    i++;
  }
  str[i] = '\0';
  return (str);
}
