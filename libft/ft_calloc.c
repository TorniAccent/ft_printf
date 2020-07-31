/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 17:19:46 by student           #+#    #+#             */
/*   Updated: 2020/05/24 22:59:05 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t num, size_t siz)
{
	void	*new;

	if (!(new = (void *)malloc(siz * num)))
		return (0);
	ft_bzero(new, num * siz);
	return (new);
}
