/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 00:02:53 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/10 00:29:44 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nc;
	size_t	len_s;
	size_t	i;
	size_t	j;

	nc = 0;
	len_s = ft_strlen((char *)s);
	while (*s)
	{
		if (*s == c)
			nc++;
		s++;
	}
	nc++;
	tab = (char **)malloc(sizeof (char *)*(nc + 1));
	if (tab == NULL)
		return (NULL);
	len_s = 0;
	i = 0;
	j = 0;
	while (i < nc)
	{
		while (s[j] == c)
			j++;
		len_s = 0;
		while (s[j + len_s] && s[j + len_s] != '\0')
			len_s++;
		tab[i] = ft_substr(s + j, 0, len_s);
		if (tab[i] == NULL)
			return (NULL);
		j += len_s;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
