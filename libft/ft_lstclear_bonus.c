/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 19:52:31 by student           #+#    #+#             */
/*   Updated: 2020/05/27 21:19:55 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	if (lst)
	{
		tmp = *lst;
		while (tmp != NULL)
		{
			*lst = tmp->next;
			ft_lstdelone(tmp, del);
			tmp = *lst;
		}
		lst = NULL;
	}
}
