/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:28:48 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/10 05:55:51 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len_s;
	char			*res;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len_s = ft_strlen((char *)s);
	res = (char *)malloc(len_s + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[len_s] = '\0';
	return (res);
}
