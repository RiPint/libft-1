#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
  size_t i;
  unsigned char *s3;
  unsigned char *s4;

  s3 = (unsigned char *)s1;
  s4 = (unsigned char *)s2;
  i = 0;
  while (s3[i] == s4[i] && s3[i] && s4[i])
      i++;
  return ((int)s3[i] - (int)s4[i]);
}
