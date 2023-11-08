/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:10:13 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/08 22:58:17 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char u1;
	unsigned char u2;

	while (n > 0 && (*s1 || *s2))
	{
		u1 = (unsigned char) *s1;
		u2 = (unsigned char) *s2;
		if (u1 != u2)
			return (u1 - u2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
