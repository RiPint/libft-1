#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
  t_list	*list;
  void		*ncontent;

  if (!(ncontent = malloc(sizeof(*ncontent) * content_size + 1)))
    return (NULL);
  if (content)
      ft_memcpy(new_content, content, content_size);
  else
    {
      content = NULL;
      content_size = 0;
    }
  list->next = NULL;
  return (list);
}
