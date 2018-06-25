/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:08:57 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 17:43:04 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*a_dst;
	unsigned char	*a_src;
	size_t			i;

	a_dst = (unsigned char *)dst;
	a_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		a_dst[i] = a_src[i];
		i++;
	}
	return (dst);
}
/*
** int main(void)
** {
**	char a[] = "1111";
**	char b[] = "0000";
**	printf("%s\n", (char *)ft_memcpy(b, a, 2));
**	return (0);
** }
*/
