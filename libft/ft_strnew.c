/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:14:31 by spliesei          #+#    #+#             */
/*   Updated: 2018/01/30 15:45:11 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ret;
	size_t	i;

	ret = (char *)malloc(sizeof(char) * size + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i <= size)
		ret[i++] = 0;
	return (ret);
}
