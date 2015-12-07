#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
  int i;

  i = 0;
  while ((s1[i] && s2[i] && s1[i] == s2[i]) || ((size_t)s1[i + 1] <= n && (size_t)s2[i + 1] <= n))
    {
      if ((s1[i + 1] == '\0' && s2[i + 1] == '\0') || ((size_t)s1[i] == n && (size_t)s2[i] == n))
	return (1);
      i++;
    }
  return (0);
}
