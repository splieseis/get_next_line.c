/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 17:30:08 by spliesei          #+#    #+#             */
/*   Updated: 2018/01/03 14:22:31 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_char(const char *s, char c)
{
	int		start;
	int		end;
	int		i;
	char	*ret;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] == c)
		start++;
	end = ft_strlen(s) - 1;
	while (s[end] == c)
		end--;
	if (end > start)
		ret = (char *)malloc(sizeof(char) * (end - start + 2));
	else
		ret = (char *)malloc(sizeof(char) * 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (start <= end)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
