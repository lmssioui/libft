/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 06:25:25 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/16 22:45:30 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static char	*ft_is_null(char const *s1, char const *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			return (ft_strdup(s2));
		return (ft_strdup(s1));
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*str;
	char	*ptr;

	ptr = ft_is_null(s1, s2);
	if (ptr != NULL)
		return (ptr);
	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	str = (char *)malloc(len_s1 + len_s2 + 1);
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
		ft_strlcpy(str, s1, len_s1 + 1);
	else
		str[0] = '\0';
	if (s2 != NULL)
		ft_strlcat(str + len_s1, s2, len_s1 + len_s2 + 1);
	return (str);
}
