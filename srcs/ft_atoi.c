#include <string.h>

int	ft_atoi(const char *str)
{
  size_t i;
  int sign;
  int result;

  result = 0;
  sign = 1;
  i = 0;
  while (str[i] == ' ' || str[i] == '\t' ||
	 str[i] == '\v' || str[i] == '\r' ||
	 str[i] == '\n' || str[i] == '\f')
    i++;
  if (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	sign = -sign;
      i++;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      result = str[i] + 48;
      result *= 10;
      i++;
    }
  return (result);
}
