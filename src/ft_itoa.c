/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:00:12 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/09 18:01:42 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
int	count(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	if (nb > 0)
	{
		while (i < nb)
		{
			nb = nb / 10;
			i++;
		}
	}
	return (i);
}
char	*ft_itoa(int n)
{
	char	*str;
	int	i;

	str = (char *)malloc(count(n) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while ( i < count(n) && i < nb)
	{
		str[i] = ( n / 10 + '0');
		n = n / 10;
		i++;
	}
	str[i] = nb % 10 + '0';
	str[i] = '\0';
	return (str);
}
#include <stdio.h>
int main()
{
	int n = -1452;
       printf("%d\n",count (n));
       printf("%s\n",ft_itoa(n));

}
