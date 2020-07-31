/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 19:54:02 by student           #+#    #+#             */
/*   Updated: 2020/05/28 04:55:42 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *h;
	t_list *tmp;
	t_list *new;

	h = NULL;
	if (lst && f)
	{
		tmp = lst;
		if ((h = ft_lstnew(f(tmp->content))) == 0)
			return (0);
		tmp = tmp->next;
		while (tmp)
		{
			if (!(new = ft_lstnew(f(tmp->content))))
			{
				ft_lstclear(&h, del);
				h = NULL;
				break ;
			}
			ft_lstadd_back(&h, new);
			tmp = tmp->next;
		}
	}
	return (h);
}
