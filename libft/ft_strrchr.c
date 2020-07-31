/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 19:52:46 by student           #+#    #+#             */
/*   Updated: 2020/05/23 19:55:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	chr;

	ptr = (char *)s;
	chr = (char)c;
	ptr += ft_strlen(s);
	while (ptr != s && *ptr != chr)
		ptr--;
	if (*ptr == chr)
		return (ptr);
	return (0);
}
