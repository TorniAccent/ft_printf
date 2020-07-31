/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 21:29:37 by student           #+#    #+#             */
/*   Updated: 2020/07/31 21:29:40 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_xtoa(unsigned long long n, char *base)
{
	char					*res;
	int						len;
	unsigned long long		buf;

	buf = n;
	len = 1;
	while (buf >= 16)
	{
		len++;
		buf /= 16;
	}
	if (!(res = malloc(sizeof(*res) * (len + 1))))
		return (NULL);
	res[len--] = '\0';
	while (n >= 16)
	{
		buf = n % 16;
		res[len--] = *(base + buf);
		n /= 16;
	}
	res[len] = *(base + n);
	return (res);
}
