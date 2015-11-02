#include <libft.h>
#include <unistd.h>

void	ft_putendl(char const *s)
{
  write(1, str, ft_strlen(str));
  write(1, "\n", 1);
}
