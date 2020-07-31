/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 20:52:54 by student           #+#    #+#             */
/*   Updated: 2020/05/25 20:18:04 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t		n;
	size_t		i;
	char		*d;
	const char	*s;

	i = siz;
	d = dst;
	s = src;
	while (i-- && *d)
		d++;
	n = d - dst;
	i = siz - n;
	if (!i)
		return (n + ft_strlen(src));
	while (*s)
	{
		if (i - 1)
		{
			*d++ = *s;
			i--;
		}
		s++;
	}
	*d = '\0';
	return (n + (s - src));
}
