/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:14:23 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/18 15:26:05 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sizedest;
	size_t	sizesrc;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	sizedest = ft_strlen(dst);
	sizesrc = ft_strlen((char *)src);
	if (dstsize <= sizedest)
	{
		return (dstsize + sizesrc);
	}
	while (dst[i] && i < dstsize - 1)
		i++;
	while (i < dstsize - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (sizedest + sizesrc);
}
