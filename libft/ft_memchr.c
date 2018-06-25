/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:11:46 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/13 16:07:02 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*alias;
	size_t			i;

	alias = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (alias[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

/*
** int main(void)
** {
**	char a[] = "aerysghytew";
**	printf("%s\n", (char *)ft_memchr(a, 'g', 5));
**	return (0);
** }
*/
