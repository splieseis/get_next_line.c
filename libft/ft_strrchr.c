/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:49:27 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/13 11:54:34 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != c && i >= 0)
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}

/*
** int main (void)
** {
** char *s = "Hallo I'm a working function.";
** printf("%s\n", ft_strrchr(s, 'l'));
** printf("%s\n", strrchr(s, 'l'));
** return (0);
** }
*/
