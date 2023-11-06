/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 03:37:57 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/06 03:40:03 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	if (*little == '\0')
		return ((char *)big);
	while (*big && len > 0)
	{
		if (ft_strncmp(big, little, len) == 0)
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}
