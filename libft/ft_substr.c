/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 01:45:11 by student           #+#    #+#             */
/*   Updated: 2020/05/27 20:12:30 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, size_t beg, size_t len)
{
	char	*sub;
	size_t	i;

	if (!str)
		return (0);
	if (beg > ft_strlen(str))
		len = 0;
	if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (i < len)
		sub[i++] = str[beg++];
	sub[i] = '\0';
	return (sub);
}
