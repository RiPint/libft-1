#include <string.h>

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
  int i;
  size_t j;

  j = 0;
  i = 0;
  while (s1[j] == s2[j] && s1[j] && s2[j] && j < n)
    j++;
  i = j;
  if (s1[j] != s2[j] && j < n)
    return (0);
  return (1);
}
