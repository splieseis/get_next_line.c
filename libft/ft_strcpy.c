/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:41:05 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 16:55:50 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
** int main (void)
** {
** const char s[] = "Hallo";
** char d[] = "adasdfasd";
** printf("mine: %s\n", ft_strcpy(d, s));
** printf("real: %s\n", strcpy(d, s));
** return (0);
** }
*/
