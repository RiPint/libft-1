#include <string.h>

size_t	ft_line_count(char const *s, char c)
{
  size_t i;
  size_t result;

  result = 0;
  i = 0;
  while (s[i])
    {
      if (s[i] == c)
        {
          while (s[i] == c)
            i++;
          if (s[i] == '\0')
            return (result);
          result++;
        }
      else
        i++;
    }
  return (result);
}
