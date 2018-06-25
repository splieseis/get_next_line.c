/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:15:46 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/16 15:09:41 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int h;
	int n;
	int i;

	if (needle[0] == '\0')
		return ((char *)&haystack[0]);
	h = 0;
	while (haystack[h])
	{
		n = 0;
		i = h;
		while (needle[n] && haystack[h] == needle[n])
		{
			n++;
			h++;
		}
		if (!needle[n])
			return ((char *)&haystack[i]);
		else
			h = i;
		h++;
	}
	return (NULL);
}

/*
** int main (void)
** {
** char *haystack = "Hallo I'm a working function.";
** char *needle = "I'm a working function.";
** printf("%s\n", ft_strstr(haystack, needle));
** printf("%s\n", strstr(haystack, needle));
** return (0);
** }
*/
