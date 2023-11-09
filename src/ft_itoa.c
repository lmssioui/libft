/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:22:22 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/09 22:22:53 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <stdlib.h>
#include <stdio.h>

int	count(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nbr;
	int		i;
	int		nb;

	nbr = n;
	nb = count(n);
	if (!(str = (char *)malloc(nb + 1)))
		return (NULL);
	if (nbr < 0)
	{
		*str = '-';
		nbr = -nbr;
	}
	i = nb - 1;
	while (i >= 0)
        {
                str[i] = nbr % 10 + '0';
                nbr = nbr / 10;
                i--;
        }
	if (n < 0)
		str[0] = '-';
	str[nb] = '\0';
	return (str);
}
