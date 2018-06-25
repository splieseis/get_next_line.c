/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 09:56:43 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/16 15:18:46 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	h;
	int n;
	int	i;

	h = 0;
	while (haystack[h] && h < (int)len)
	{
		n = 0;
		i = h;
		while (needle[n] && h < (int)len && haystack[h] == needle[n])
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
** char *needle = "allo";
** printf("%s\n", ft_strnstr(haystack, needle, 5));
** printf("%s\n", strnstr(haystack, needle, 5));
** return (0);
** }
*/
