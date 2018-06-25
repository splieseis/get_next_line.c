/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:33:38 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/13 20:41:42 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a_dst;
	unsigned char	*a_src;

	a_dst = (unsigned char *)dst;
	a_src = (unsigned char *)src;
	if (a_dst < a_src)
		ft_memcpy(a_dst, a_src, len);
	else
	{
		while (len > 0)
		{
			len--;
			a_dst[len] = a_src[len];
		}
	}
	return (dst);
}

/*
** int main(void)
** {
**	char a[] = "1234";
**	//char b[] = "0000";
**	printf("%s\n", (char *)ft_memmove(&a[0], &a[1], 2));
**	return (0);
** }
*/
