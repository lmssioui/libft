/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 03:37:57 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/08 03:56:54 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	if (*little == '\0')
		return ((char *)big);
	while (*big && len > 0)
	{
		if (ft_strncmp(big, little, len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
