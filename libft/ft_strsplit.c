/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:07:42 by spliesei          #+#    #+#             */
/*   Updated: 2017/12/16 18:32:56 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(char const *s, char c)
{
	int	w;
	int i;

	i = 0;
	w = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			w++;
		i++;
	}
	if (s[0] != '\0')
		w++;
	return (w);
}

static	char	*ft_print_words(char const *s, char c, int *i)
{
	char	*str;
	int		k;

	if ((str = (char *)malloc(sizeof(*s) * ft_strlen(s))) == 0)
		return (NULL);
	k = 0;
	while (s[*i] != c && s[*i])
	{
		str[k] = s[*i];
		k++;
		*i += 1;
	}
	str[k] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		w;
	char	**words;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	w = ft_count_words(s, c);
	if ((words = (char **)malloc(sizeof(words) * (w + 2))) == NULL)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < w && s[i])
	{
		words[j] = ft_print_words(s, c, &i);
		j++;
	}
	words[j] = NULL;
	return (words);
}
