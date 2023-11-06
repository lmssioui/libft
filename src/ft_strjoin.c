/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 06:25:25 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/06 08:31:12 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdlib.h>
#include<string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*str;
	int		i;

	len_s1 = ft_strlen((char *) s1);
	len_s2 = ft_strlen((char *) s2);
	str = (char *)malloc(len_s1 + len_s2 + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len_s1 + 1);
	i = len_s1;
	while (len_s2 + 1 > 0)
	{
		str[i] = *s2;
		i++;
		s2++;
		len_s2--;
	}
	return (str);
}
