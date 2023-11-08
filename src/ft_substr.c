/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 03:51:19 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/08 23:12:57 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	unsigned int	n;

	i = 0;
	n = ft_strlen((char *)s);
	if (start >= n)
	{
		sub = (char *)malloc(1);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
	}
	else
	{
		sub = (char *)malloc(len + 1);
		if (sub == NULL)
			return (NULL);
		while (s[start] && len > 0)
		{
			sub[i] = s[start];
			start++;
			i++;
			len--;
		}
		sub[i] = '\0';
	}
	return (sub);
}
