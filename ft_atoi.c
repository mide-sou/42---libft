/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.i                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:56:28 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/08 16:12:24 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>      /* printf, fgets */
//#include <stdlib.h>     /* atoi */

int	ft_atoi(const char *str)
{
	size_t	i;
	int		s;
	int		res;

	res = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}

/* int main()
{
    int val;
    char strn1[] = "-12a546";
 
    val = ft_atoi(strn1);
    printf("String value = %s\n", strn1);
    printf("Integer value = %d\n", val);
 
    char strn2[] = "-	Ge1eksforGeeks";
    val = ft_atoi(strn2);
    printf("String value = %s\n", strn2);
    printf("Integer value = %d\n", val);
 
    return (0);
} */
