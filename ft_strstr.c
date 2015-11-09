#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
  size_t i;
  size_t j;
  char  *str;

  str = ft_strdup(s1);
  i = 0;
  j = 0;

  while (str[i])
    {
      if (str[i] == s2[j])
        {
          while (str[i] == s2[j] && s2[j])
            {
              i++;
              j++;
            }
          if (s2[j] == '\0')
	    return (str);
          else
            j = 0;
        }
      str++;
    }
  return (NULL);
}
