/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:02:22 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/14 18:39:28 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if ((unsigned char)a_dst[i] == (unsigned char)c)
			return ((void *)&dst[i + 1]);
		i++;
	}
	return (NULL);
}
/*
** int main(void)
** {
**	char a[] = "1121";
**	char b[] = "0000";
**	printf("%s\n", (char *)ft_memccpy(b, a, '2', 4));
**	return (0);
** }
*/
