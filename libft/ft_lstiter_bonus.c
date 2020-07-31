/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 19:53:49 by student           #+#    #+#             */
/*   Updated: 2020/05/28 04:56:08 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *tmp;

	if (lst)
	{
		tmp = lst;
		while (tmp->next != NULL)
		{
			f(tmp->content);
			tmp = tmp->next;
		}
		f(tmp->content);
	}
}
