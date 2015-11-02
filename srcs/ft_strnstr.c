#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
  size_t i;
  size_t j;

  i = 0;
  j = 0;

  if (s2[i] == '\0')
    return (s1);
  while (s1[i] && i < n)
    {
      if (s1[i] == s2[j])
        {
          while (s1[i] == s2[j] && i < n)
            {
              i++;
              j++;
            }
          if (s2[j] == '\0' || i == n)
            return ((char *)s1);
          else
            j = 0;
        }
      i++;
    }
  return (NULL);
}
