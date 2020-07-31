/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 02:00:54 by student           #+#    #+#             */
/*   Updated: 2020/05/24 03:35:43 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	char	*sum;

	if (!s1 || !s2)
		return (0);
	if (!(sum = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) +
						1))))
		return (0);
	i = 0;
	while (*s1)
		sum[i++] = *s1++;
	while (*s2)
		sum[i++] = *s2++;
	sum[i] = '\0';
	return (sum);
}
