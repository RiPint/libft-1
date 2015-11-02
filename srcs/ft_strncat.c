#include <string.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
  size_t size;
  size_t count;

  count = 0;
  size = ft_strlen(s1);
  while (s2[count] && count < n)
    {
      s1[size] = s2[count];
      size++;
      count++;
    }
    s1[size] = '\0';
  return (s1);
}

int	main(void)
{
  char a[] = "abcdef";
  char z[] = "ghijkl";
  char *str;
  str = ft_strncat(a, z, 3);
  printf("%s\n", str);
}
