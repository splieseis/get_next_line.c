/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 21:49:27 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/16 11:55:59 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *ret;
	t_list *cur;

	if (lst == NULL)
		return (NULL);
	tmp = f(lst);
	cur = ft_lstmap(lst->next, f);
	ft_lstadd(&cur, (ret = ft_lstnew(tmp->content, tmp->content_size)));
	return (ret);
}
