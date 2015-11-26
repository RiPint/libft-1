#include "libft.h"
#include <string.h>

void	ft_lstadd(t_list **alst, t_list *new)
{
  t_list *nlist;
  if (alst)
    {
      nlist = ft_lstnew((void const*)new->content, new->content_size);
      nlist->next = *alst;
      *alst = nlist;
    }
  else
    nlist = ft_lstnew((void const*)(*alst)->content, (*alst)->content_size);
}
