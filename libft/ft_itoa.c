/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:59:33 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/16 15:53:41 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_digits(int n, int digits, int sign)
{
	char *ret;

	ret = (char *)malloc(sizeof(char) * (digits + sign + 1));
	if (!ret)
		return (NULL);
	if (sign)
		ret[0] = '-';
	ret[digits + sign] = '\0';
	while (digits > 0)
	{
		ret[sign - 1 + digits--] = n % 10 + '0';
		n = n / 10;
	}
	return (ret);
}

char		*ft_itoa(int n)
{
	int	digits;
	int	sign;
	int nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	nb = n;
	digits = 0;
	while (n)
	{
		digits++;
		n = n / 10;
	}
	if (digits == 0)
		return (ft_strdup("0"));
	return (ft_digits(nb, digits, sign));
}
