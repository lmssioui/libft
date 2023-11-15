/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 06:08:29 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/15 08:07:56 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
#include <stdio.h>
void *my_function(unsigned int i, char *s)
{
	printf("%c\n",s[i]);
}
int main()
{
	char *s = "abdellatif";
	ft_striteri(s, my_function(7, s));
}
