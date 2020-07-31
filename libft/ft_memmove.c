/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 05:49:44 by student           #+#    #+#             */
/*   Updated: 2020/05/24 22:33:13 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (dst <= src)
	{
		if (!n || dst == src)
			return (dst);
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
		return (dst);
	}
	while (n-- > 0)
		((char *)dst)[n] = ((char *)src)[n];
	return (dst);
}
