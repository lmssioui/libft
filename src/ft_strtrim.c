/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:27 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/06 22:04:00 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len_s1;
	size_t	len_set;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	str = (char *)malloc (sizeof (char) * len_set);
	if (str = NULL)
		return (NULL);
	if (ft_strnstr(s1, set, len_s1))
		while (*set)
		{
			*str = s1[len_s1];
			set++;
			str++;
			len_s1++;
		}
	return (str);
}

