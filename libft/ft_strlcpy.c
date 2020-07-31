/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 19:56:45 by student           #+#    #+#             */
/*   Updated: 2020/05/25 20:27:51 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t siz)
{
	char		*d;
	const char	*s;
	size_t		n;

	d = dst;
	s = src;
	n = siz;
	if (n)
		while (--n && (*d++ = *s++))
			;
	if (!n)
		if (siz)
			*d = '\0';
	return (ft_strlen(src));
}
