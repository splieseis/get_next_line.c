/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:34:47 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/13 19:53:19 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a_s1;
	unsigned char	*a_s2;
	size_t			i;

	a_s1 = (unsigned char *)s1;
	a_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n && a_s1[i] == a_s2[i])
		i++;
	if (i < n)
		return (a_s1[i] - a_s2[i]);
	return (0);
}

/*
** int main(void)
** {
**	char a[] = "1234_";
**	char b[] = "12345";
**	printf("mine: %d\n", ft_memcmp(a, b, 5));
**	printf("real: %d\n", memcmp(a, b, 5));
**	return (0);
** }
*/
