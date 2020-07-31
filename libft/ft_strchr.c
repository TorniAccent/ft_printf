/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 19:30:46 by student           #+#    #+#             */
/*   Updated: 2020/05/23 19:50:05 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	chr;

	ptr = (char *)s;
	chr = (char)c;
	while (*ptr != '\0' && *ptr != chr)
		ptr++;
	if (*ptr == chr)
		return (ptr);
	return (0);
}
