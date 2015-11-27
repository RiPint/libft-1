/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:45:09 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/27 11:45:12 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
  t_list *list;
  t_list *ret;
  t_list *tmp;

  list = lst;
  while (list)
    {
      if (!(tmp = (t_list *)malloc(sizeof(t_list))))
	return (NULL);
      tmp = f(list);
      if (list)
	ret->next = tmp;
      else
	ret = tmp;
      ret = ret->next;
      list = list->next;
    }
  return (tmp);
}
