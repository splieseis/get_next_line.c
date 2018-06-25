/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:01:08 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/13 19:35:36 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lenght;
	char	*ret;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	lenght = (ft_strlen(s1) + ft_strlen(s2));
	ret = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!ret)
		return (NULL);
	ret[lenght] = '\0';
	i = 0;
	while (*s1)
	{
		ret[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		ret[i++] = *s2;
		s2++;
	}
	return (ret);
}
