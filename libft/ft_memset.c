/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:33:40 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/16 17:37:09 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*alias;
	size_t			i;

	alias = (unsigned char *)b;
	i = 0;
	while (i < len)
		alias[i++] = c;
	return (b);
}

/*
**	int main(void)
**	{
**	char b[] = "asdf";
**	printf("%s\n", (char *)ft_memset(b, 'k', 4));
**	return (0);
**	}
*/
