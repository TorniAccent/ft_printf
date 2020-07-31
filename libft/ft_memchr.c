/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 06:17:55 by student           #+#    #+#             */
/*   Updated: 2020/05/22 06:30:19 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)src == (unsigned char)c)
			return ((unsigned char *)src);
		src++;
	}
	return (0);
}
