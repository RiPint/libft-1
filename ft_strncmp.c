#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t i;
  unsigned char *s3;
  unsigned char *s4;

  if (n > 1)
    n--;
  s3 = (unsigned char *)s1;
  s4 = (unsigned char *)s2;
  i = 0;
  if (n == 0)
    return (0);
  while (s3[i] && s4[i] && n--)
    i++;
  return ((int)s3[i] - (int)s4[i]);
}
