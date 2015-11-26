#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
  *alst = del(*alst->content, *alst->content_size);
  free(alst);
}
