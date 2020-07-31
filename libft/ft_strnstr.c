/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:20:23 by student           #+#    #+#             */
/*   Updated: 2020/05/25 05:25:17 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *outer, const char *inner, size_t len)
{
	size_t	inlen;
	size_t	j;
	size_t	i;
	char	*out;

	if (!(out = (char *)outer))
		return (0);
	if (!(inlen = ft_strlen(inner)))
		return (out);
	if (ft_strlen(out) < inlen || len < inlen)
		return (0);
	i = 0;
	while (out[i] && i <= len - inlen)
	{
		j = 0;
		while (inner[j] && inner[j] == out[i + j])
			j++;
		if (j == inlen)
			return (&out[i]);
		i++;
	}
	return (0);
}
