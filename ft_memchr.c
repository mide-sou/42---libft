/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:11:18 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/08 14:27:27 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/* int main(void)
{
    char str[] = "ABCDEFG";
    char *ps = ft_memchr(str,'D',9);
    if (ps != NULL)
       printf ("search character found:  %s\n", ps);
    else
       printf ("search character not found\n");
 
    return 0;
} */
