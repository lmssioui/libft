/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 03:28:58 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/18 20:39:45 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb != 0 && ((nmemb * size) / nmemb) != size)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (0);
	ft_memset(array, 0, nmemb * size);
	return (array);
}
