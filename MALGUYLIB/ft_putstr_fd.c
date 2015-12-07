#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
  write(fd, str, ft_strlen(str));
}
