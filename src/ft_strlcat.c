/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:14:23 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/06 07:51:58 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int destsize)
{
	unsigned int	lend;
	unsigned int	lens;
	char			*str;

	str = (char *)src;
	lend = ft_strlen(dest);
	lens = ft_strlen(str);
	if (destsize <= lend)
		return (lens + destsize);
	while (*dest)
		dest++;
	while (lend < destsize - 1 && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (lend + lens);
}
