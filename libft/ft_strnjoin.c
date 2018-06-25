/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:01:08 by spliesei          #+#    #+#             */
/*   Updated: 2018/01/24 15:41:05 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, int n)
{
	int		lenght;
	char	*ret;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	lenght = (ft_strlen(s1) + n);
	if (!(ret = (char *)malloc(sizeof(char) * (lenght + 1))))
		return (NULL);
	ret[lenght] = '\0';
	i = 0;
	while (*s1)
	{
		ret[i++] = *s1;
		s1++;
	}
	j = 0;
	while (*s2 && j < n)
	{
		ret[i++] = *s2;
		s2++;
		j++;
	}
	return (ret);
}
