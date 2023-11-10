/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 02:34:01 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/10 04:02:43 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	ft_count(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		str_len;
	int			i;
	char		*end;

	tab = (char **)malloc((ft_count((char *)s, c) + 1) * sizeof(char *));
	if (!s || !tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			end = (char *)s;
			while (*end && *end != c)
				end++;
			str_len = end - s;
			if (str_len > 0)
			{
				tab[i] = (char *)malloc(str_len + 1);
				if (!tab[i])
				{
					return (NULL);
				}
				strncpy(tab[i], s, str_len);
				tab[i][str_len] = '\0';
				i++;
			}
			s = end;
		}
	}
	tab[i] = NULL;
	return (tab);
}
