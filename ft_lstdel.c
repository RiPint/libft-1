#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  t_list *delist;

  delist = *alst;
  while (delist != NULL)
    {
      del(delist->content, delist->content_size);
      free(delist);
      delist = delist->next;
    }
  *alst = NULL;
}
