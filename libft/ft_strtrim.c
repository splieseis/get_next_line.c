/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:43:35 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/15 21:35:47 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		i;
	char	*ret;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	end = ft_strlen(s) - 1;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
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
