/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:35:14 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/11 15:35:16 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_numdigit(int n)
{
	int	digits;

	if (n <= 0)
	{
		n = -n;
		digits = 1;
	}
	else
		digits = 0;
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_numdigit(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[len] = '\0';
	while (n > 0)
	{
		len--;
		str[len] = ((n % 10) + '0');
		n /= 10;
	}
	return (str);
}

/* int	main(void)
{
	char	*ptr;
	ptr = ft_itoa(-42);
	printf("%s", ptr);
} */