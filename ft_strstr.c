#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
  size_t i;
  size_t j;

  i = 0;
  j = 0;

  while (s1[i])
    {
      if (s1[i] == s2[j])
	{
	  while (s1[i] == s2[j])
	    {
	      i++;
	      j++;
	    }
	  if (s2[j] == '\0')
	    return ((char *)s1);
	  else
	    j = 0;
	}
      i++;
    }
  return ((char *)s2);
}
