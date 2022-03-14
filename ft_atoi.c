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

int	ft_atoi(const char *str)
{
	size_t	s;
	size_t	res;

	s = 1;
	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (s *(*str - '0'));
		if ((long)res > 2147483647)
			return (-1);
		if ((long)res < -2147483648)
			return (0);
		str++;
	}
	return (res);
}

/* int main()
{
    int val;
    char strn1[] = "2147483648";
 
    val = ft_atoi(strn1);
    printf("String value = %s\n", strn1);
    printf("Integer value = %d\n", val);
 
    char strn2[] = "-	Ge1eksforGeeks";
    val = ft_atoi(strn2);
    printf("String value = %s\n", strn2);
    printf("Integer value = %d\n", val);
 
    return (0);
}
 */