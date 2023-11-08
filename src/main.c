/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:22:53 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/07 01:22:58 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char const	*s1;
	char const	*set;
	char		*str;

	s1 = "set hello world!";
	set = "set";
	str = ft_strtrim(s1, set);
	printf("%s\n", str);
	return (0);
}
