/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:36:14 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/13 19:57:31 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}

/*
** int main (void)
** {
** const char s[] = "Halloert";
** char d[] = "adwertw";
** printf("mine: %s\n", ft_strncpy(d, s, 7));
** printf("real: %s\n", strncpy(d, s, 7));
** return (0);
** }
*/
