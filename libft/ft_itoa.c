/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 17:45:36 by student           #+#    #+#             */
/*   Updated: 2020/05/28 04:49:32 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft(int n, char *s)
{
	if (n < 10)
	{
		*s = n + '0';
		return ;
	}
	ft(n / 10, s - 1);
	*s = n % 10 + '0';
}

char		*ft_itoa(int nbr)
{
	int		len;
	int		n;
	int		neg;
	char	*str;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nbr == 0)
		return (ft_strdup("0"));
	len = 1;
	neg = 1;
	n = nbr;
	n < 0 ? len++ : (neg = 0);
	while (n /= 10)
		len++;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	str[len] = '\0';
	if (neg)
		*str = '-';
	ft(nbr < 0 ? -nbr : nbr, str + len - 1);
	return (str);
}
